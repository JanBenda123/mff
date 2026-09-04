package cz.cuni.mff.d3s.nswi080.trading;

import java.io.IOException;
import java.io.InputStreamReader;
import java.io.LineNumberReader;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Random;

import javax.jms.Connection;
import javax.jms.Destination;
import javax.jms.JMSException;
import javax.jms.MapMessage;
import javax.jms.Message;
import javax.jms.MessageConsumer;
import javax.jms.MessageListener;
import javax.jms.MessageProducer;
import javax.jms.ObjectMessage;
import javax.jms.Queue;
import javax.jms.Session;
import javax.jms.TextMessage;
import javax.jms.Topic;

import org.apache.activemq.artemis.jms.client.ActiveMQConnectionFactory;

public class Client {
    public static final String CLIENT_NAME_PROPERTY = "clientName";                             // The name of the property specifying client's name.                      
    public static final String OFFER_TOPIC = "Offers";                                          // The name of the topic for publishing offers.  
    public static final String MESSAGE_TYPE_PROPERTY = "MESSAGE_TYPE_PROPERTY";
    private final String clientName;                                                            // Client's unique name.
    private int accountNumber;                                                                  // Client's account number.
    private final Map<String, Goods> offeredGoods = new HashMap<>();                            // Offered goods, mapped by name.
    private final Map<String, List<Goods>> availableGoods = new HashMap<>();                    // Available goods, mapped by seller's name.
    private final Map<String, Goods> reservedGoods = new HashMap<>();                           // Reserved goods, mapped by name of the goods.
    private final Map<Integer, String> reserverAccounts = new HashMap<>();                      // Buyer's names, mapped by their account numbers.
    private final Map<String, Destination> reserverDestinations = new HashMap<>();              // Buyer's reply destinations, mapped by their names.
    private final Connection conn;                                                              // Connection to the broker.
    private Session clientSession;                                                              // Session for user-initiated synchronous messages.
    private Session eventSession;                                                               // Session for listening and reacting to asynchronous messages.
    private MessageProducer clientSender;                                                       // Sender for the clientSession.
    private MessageProducer eventSender;                                                        // Sender for the eventSession.
    private MessageConsumer replyReceiver;                                                      // Receiver of synchronous replies.
    private Topic offerTopic;                                                                   // Topic to send and receiver offers.
    private Queue toBankQueue;                                                                  // Queue for sending messages to the bank.
    private Queue replyQueue;                                                                   // Queue for receiving synchronous replies.
    private final LineNumberReader in = new LineNumberReader(new InputStreamReader(System.in)); // Line reader from stdin.

    
    // Client constructor. Initializes the maps.
    private Client(String clientName, Connection conn) {
        this.clientName = clientName;
        this.conn = conn;
        generateGoods();
    }

    // Generates goods items.
    private void generateGoods() {
        Random rnd = new Random();
        for (int i = 0; i < 10; ++i) {
            StringBuilder name = new StringBuilder();

            for (int j = 0; j < 4; ++j) {
                char c = (char) ('A' + rnd.nextInt('Z' - 'A'));
                name.append(c);
            }

            offeredGoods.put(name.toString(), new Goods(name.toString(), rnd.nextInt(10000)));
        }
    }

    // done
    // Sets up all JMS entities, gets bank account, publishes the first goods offer.
    private void connect() throws JMSException {
        // create two sessions - one for synchronous and one for asynchronous processing
        clientSession = conn.createSession(false, Session.AUTO_ACKNOWLEDGE);
        eventSession = conn.createSession(false, Session.AUTO_ACKNOWLEDGE);

        // create (unbound) senders for the sessions
        clientSender = clientSession.createProducer(null);
        eventSender = eventSession.createProducer(null);

        // create queue for sending messages to bank
        toBankQueue = clientSession.createQueue(Bank.BANK_QUEUE);
        // create a temporary queue for receiving messages from bank
        Queue fromBankQueue = eventSession.createTemporaryQueue();

        // temporary receiver for the first reply from the bank
        // note that although the receiver is created within a different session
        // than the queue, it is OK since the queue is used only within the
        // client session for the moment
        MessageConsumer tmpBankReceiver = clientSession.createConsumer(fromBankQueue);

        // start processing messages
        conn.start();

        // request a bank account number
        Message msg = eventSession.createTextMessage(Bank.NEW_ACCOUNT_MSG);
        msg.setStringProperty(CLIENT_NAME_PROPERTY, clientName);
        // set ReplyTo that Bank will use to send me reply and later transfer reports
        msg.setJMSReplyTo(fromBankQueue);
        clientSender.send(toBankQueue, msg);

        // get reply from bank and store the account number
        TextMessage reply = (TextMessage) tmpBankReceiver.receive();
        accountNumber = Integer.parseInt(reply.getText());
        System.out.println("Account number: " + accountNumber);

        // close the temporary receiver
        tmpBankReceiver.close();

        // temporarily stop processing messages to finish initialization
        conn.stop();

        /* Processing bank reports */

        // create consumer of bank reports (from the fromBankQueue) on the event session
        MessageConsumer bankReceiver = eventSession.createConsumer(fromBankQueue);

        // set asynchronous listener for reports, using anonymous MessageListener
        // which just calls our designated method in its onMessage method
        bankReceiver.setMessageListener(new MessageListener() {
            @Override
            public void onMessage(Message msg) {
                try {
                    processBankReport(msg);
                } catch (JMSException e) {
                    throw new RuntimeException(e);
                }
            }
        });

        /* Step 1: Processing offers */

        // create a topic both for publishing and receiving offers
        // hint: Sessions have a createTopic() method
        offerTopic = eventSession.createTopic(OFFER_TOPIC);

        // create a consumer of offers from the topic using the event session
        MessageConsumer offerTopicConsumer = eventSession.createConsumer(offerTopic);

        // set asynchronous listener for offers (see above how it can be done)
        // which should call processOffer()
        offerTopicConsumer.setMessageListener(new MessageListener() {
            @Override
            public void onMessage(Message m) {
                try {
                    processOffer(m);
                } catch (JMSException e) {
                    throw new RuntimeException(e);
                }
            }
        });

        /* Step 2: Processing sale requests */

        // create a queue for receiving sale requests (hint: Session has createQueue() method)
        // note that Session's createTemporaryQueue() is not usable here, the queue must have a name
        // that others will be able to determine from clientName (such as clientName + "SaleQueue")
        Queue saleQueue = eventSession.createQueue(clientName + "SaleQueue");

        // create consumer of sale requests on the event session
        MessageConsumer saleRequestConsumer = eventSession.createConsumer(saleQueue);

        // set asynchronous listener for sale requests (see above how it can be done)
        // which should call processSale()
        saleRequestConsumer.setMessageListener(new MessageListener() {
            @Override
            public void onMessage(Message msg) {
                try {
                    processSale(msg);
                } catch (JMSException e) {
                    throw new RuntimeException(e);
                }
            }
        });

        // create temporary queue for synchronous replies
        replyQueue = clientSession.createTemporaryQueue();

        // create synchronous receiver of the replies
        replyReceiver = clientSession.createConsumer(replyQueue);

        // restart message processing
        conn.start();

        // send list of offered goods
        publishGoodsList(clientSender, clientSession);

        sendDiscoveryMsg();
    }

    private void sendDiscoveryMsg() throws JMSException{
        synchronized(clientSession) { // Wait for client session to free
            Message discoveryReq = clientSession.createMessage();
            discoveryReq.setStringProperty(MESSAGE_TYPE_PROPERTY, "DISCOVERY_REQUEST");
            discoveryReq.setStringProperty(CLIENT_NAME_PROPERTY, clientName);
            
            clientSender.send(offerTopic, discoveryReq);
        }   
    }

    // done
    /*
     * Publishes a list of offered goods. Sometimes we publish the list on user's request,
     * sometimes we react to an event.
     *
     * @param sender an (unbound) sender that fits into current session
     */
    private void publishGoodsList(MessageProducer sender, Session session) throws JMSException {
        // create a message (of appropriate type) holding the list of offered goods
        // which can be created like this: new ArrayList<Goods>(offeredGoods.values())
        ArrayList<Goods> goods;
        synchronized(offeredGoods) {
            goods = new ArrayList<>(offeredGoods.values());
        }
        Message msg = session.createObjectMessage(goods);
        
        // don't forget to include the clientName in the message so other clients know
        // who is sending the offer - see how connect() does it when sending message to bank
        msg.setStringProperty(CLIENT_NAME_PROPERTY, clientName);

        // send the message using the sender passed as parameter
        sender.send(offerTopic, msg);
    }

    /*
     * Sends an empty offer and disconnects from the broker.
     */
    private void disconnect() throws JMSException {
        // delete all offered goods
        offeredGoods.clear();

        // send the empty list to indicate client quit
        publishGoodsList(clientSender, clientSession);

        // close the connection to broker
        conn.close();
    }

    /*
     * Prints known goods that are offered by other clients.
     */
    private void list() {
        System.out.println("Available goods (name: price):");
        // iterate over sellers
        synchronized(availableGoods){ //Adding goods during list could result in race condition
            for (String sellerName : availableGoods.keySet()) {
                System.out.println("From " + sellerName);
                // iterate over goods offered by a seller
                
                for (Goods g : availableGoods.get(sellerName)) {
                    System.out.println("  " + g);
                }
            }
        }
    }

    /*
     * Main interactive user loop.
     */
    private void loop() throws IOException, JMSException {
        // first connect to broker and setup everything
        connect();

        loop:
        while (true) {
            System.out.println("\nAvailable commands (type and press enter):");
            System.out.println(" l - list available goods");
            System.out.println(" p - publish list of offered goods");
            System.out.println(" b - buy goods");
            System.out.println(" a - get account balance");
            System.out.println(" q - quit");
            String line = in.readLine();
            if (line.isEmpty()) {
                continue;
            }
            switch (line.charAt(0)) {
                case 'q':
                    disconnect();
                    break loop;
                case 'b':
                    buy();
                    break;
                case 'l':
                    list();
                    break;
                case 'p':
                    publishGoodsList(clientSender, clientSession);
                    System.out.println("List of offers published");
                    break;
                case 'a':
                    System.out.println("Your account balance is:");
                    getBalance();
                    break;
                default:
                    break;
            }
        }
    }

    private void getBalance() throws JMSException{
        // Send request to the bank
        MapMessage bankMsg = clientSession.createMapMessage();
        bankMsg.setInt(Bank.ORDER_TYPE_KEY, Bank.ORDER_TYPE_GET_BALANCE);
        bankMsg.setInt(Bank.ORDER_RECEIVER_ACC_KEY, accountNumber);
        bankMsg.setJMSReplyTo(replyQueue);

        clientSender.send(toBankQueue, bankMsg);

        //Wait for the resoponse
        TextMessage reply = (TextMessage)replyReceiver.receive();
        System.out.println("$"+reply.getText());
    }

    // done
    /*
     * Performs buying of goods.
     */
    private void buy() throws IOException, JMSException {
        // get information from the user
        System.out.println("Enter seller name:");
        String sellerName = in.readLine();
        System.out.println("Enter goods name:");
        String goodsName = in.readLine();

        // check if the seller exists
        List<Goods> sellerGoods = availableGoods.get(sellerName);
        if (sellerGoods == null) {
            System.out.println("Seller does not exist: " + sellerName);
            return;
        }

        // First consider what message types clients will use for communicating a sale
        // we will need to transfer multiple values (of String and int) in each message
        // MapMessage? ObjectMessage? TextMessage with extra properties?

        /* Step 1: send a message to the seller requesting the goods */
        // create local reference to the seller's queue
        // similar to Step 2 in connect() but using sellerName instead of clientName
        Queue sellerQueue = clientSession.createQueue(sellerName + "SaleQueue");

        // create message requesting sale of the goods
        // includes: clientName, goodsName, accountNumber
        // also include reply destination that the other client will use to send reply (replyQueue)
        // how? see how connect() uses SetJMSReplyTo()
        MapMessage msg = clientSession.createMapMessage();

        msg.setString("clientName", clientName);
        msg.setString("goodsName", goodsName);
        msg.setInt("accountNumber", accountNumber);
        msg.setStringProperty(MESSAGE_TYPE_PROPERTY, "tradeOffer");

        msg.setJMSReplyTo(replyQueue);
        // send the message (with clientSender)
        clientSender.send(sellerQueue, msg);

        /* Step 2: get seller's response and process it */

        // receive the reply (synchronously, using replyReceiver)
        msg = (MapMessage)replyReceiver.receive();

        // parse the reply (depends on your selected message format)
        // distinguish between "sell denied" and "sell accepted" message
        // in case of "denied", report to user and return from this method
        // in case of "accepted"
        // - obtain seller's account number and price to pay
        boolean sellAccepted = msg.getBoolean("accepted");
        if (!sellAccepted){
            System.out.println("Seller denied the trade upfront");
            return;
        }

        int price = msg.getInt("price");
        int sellerAccount = msg.getInt("accountNumber");

        /* Step 3: send message to bank requesting money transfer */

        // create message ordering the bank to send money to seller
        MapMessage bankMsg = clientSession.createMapMessage();
        bankMsg.setStringProperty(CLIENT_NAME_PROPERTY, clientName);
        bankMsg.setInt(Bank.ORDER_TYPE_KEY, Bank.ORDER_TYPE_SEND);
        bankMsg.setInt(Bank.ORDER_RECEIVER_ACC_KEY, sellerAccount);
        bankMsg.setInt(Bank.AMOUNT_KEY, price);

        System.out.println("Sending $" + price + " to account " + sellerAccount);

        // send message to bank
        clientSender.send(toBankQueue, bankMsg);

        /* Step 4: wait for seller's sale confirmation */

        // receive the confirmation, similar to Step 2
        msg = (MapMessage)replyReceiver.receive();

        // parse message and verify its confirmation message
        boolean tradeSuccess = msg.getBoolean("tradeSuccess");
        

        // report successful sale to the user
        if (tradeSuccess){
            String recievedGoodsName = msg.getString("goodsName");
            System.out.println("Now you are a proud owner of " + recievedGoodsName + ". Congratulations!");
        }
        else{
            System.out.println("Trade declined.");
        }
    }

    // done
    /*
     * Processes a message with a goods offer.
     */
    private void processOffer(Message msg) throws JMSException {
        // parse the message, obtaining sender's name and list of offered goods
        String msgType = msg.getStringProperty(MESSAGE_TYPE_PROPERTY);
        String sender = msg.getStringProperty(CLIENT_NAME_PROPERTY);

        // Ignore own messages
        if (clientName.equals(sender)) return;

        //
        if ("DISCOVERY_REQUEST".equals(msgType)) {
            publishGoodsList(eventSender, eventSession); 
            return;
        }
        ArrayList<Goods> receivedGoods;
        try {
            ObjectMessage objMsg = (ObjectMessage) msg;
            receivedGoods = (ArrayList<Goods>) objMsg.getObject();
        } catch (Exception e) {
            throw new RuntimeException(e);
        }

        // should ignore messages sent from myself
        if (clientName.equals(sender)){
            return;
        }

        // store the list into availableGoods (replacing any previous offer)
        // empty list means disconnecting client, remove it from availableGoods completely
        if (receivedGoods.isEmpty()) {
            availableGoods.remove(sender);
        } else {
            availableGoods.put(sender, receivedGoods);
        }
    }

    // done
    /*
     * Processes a message requesting a sale.
     */
    private void processSale(Message msg) throws JMSException {
        /* Step 1: parse the message */

        // distinguish that it's the sale request message
        String msgType = msg.getStringProperty(MESSAGE_TYPE_PROPERTY);
        if (!msgType.equals("tradeOffer")){
            return;
        }
        MapMessage mapMsg = (MapMessage)msg;

        // obtain buyer's name (buyerName), goods name (goodsName) , buyer's account number (buyerAccount)
        String buyerName = mapMsg.getString("clientName");
        String goodsName = mapMsg.getString("goodsName");
        int buyerAccount = mapMsg.getInt("accountNumber");

        // also obtain reply destination (buyerDest)
        // how? see for example Bank.processTextMessage()
        Destination buyerDest = mapMsg.getJMSReplyTo();

        /* Step 2: decide what to do and modify data structures accordingly */

        MapMessage response = eventSession.createMapMessage();

        // check if we still offer these goods
        Goods goods;
        synchronized(offeredGoods){
            goods = offeredGoods.get(goodsName);
            if (goods != null) {
                offeredGoods.remove(goodsName);
            }
        }

        if (goods == null){
            response.setBoolean("tradeSuccess", false);
            eventSender.send(buyerDest, response);
            return;
        }

        // if yes, we should remove it from offeredGoods and publish new list
        offeredGoods.remove(goodsName);
        publishGoodsList(eventSender, eventSession);
        // also it's useful to create a list of "reserved goods" together with buyer's information
        // such as name, account number, reply destination
        reservedGoods.put(buyerName, goods);
        reserverAccounts.put(buyerAccount, buyerName);
        reserverDestinations.put(buyerName, buyerDest);

        /* Step 3: send reply message */

        // prepare reply message (accept or deny)
        response.setBoolean("tradeSuccess", true); // Only success is posible here
        // accept message includes: my account number (accountNumber), price (goods.price)
        response.setInt("accountNumber", accountNumber);
        response.setInt("price", goods.price());
        response.setBoolean("accepted", true);

        // send reply
        eventSender.send(buyerDest, response);
    }

    // done
    /*
     * Processes message with (transfer) report from the bank.
     */
    private void processBankReport(Message msg) throws JMSException {
        /* Step 1: parse the message */

        // Bank reports are sent as MapMessage
        if (msg instanceof MapMessage) {
            MapMessage mapMsg = (MapMessage) msg;
            // get report number
            int cmd = mapMsg.getInt(Bank.REPORT_TYPE_KEY);
            if (cmd == Bank.REPORT_TYPE_RECEIVED) {
                // get account number of sender and the amount of money sent
                int buyerAccount = mapMsg.getInt(Bank.REPORT_SENDER_ACC_KEY);
                int amount = mapMsg.getInt(Bank.AMOUNT_KEY);

                // match the sender account with sender
                String buyerName = reserverAccounts.get(buyerAccount);

                // match the reserved goods
                Goods g;
                synchronized(reservedGoods){
                    g = reservedGoods.get(buyerName);
                }

                System.out.println("Received $" + amount + " from " + buyerName);

                /* Step 2: decide what to do and modify data structures accordingly */

                // get the buyer's destination
                Destination buyerDest = reserverDestinations.get(buyerName);

                // did they pay enough?
                if (amount >= g.price()) {
                    // remove the reserved goods and buyer-related information
                    synchronized (reserverDestinations) {
                        reserverDestinations.remove(buyerName);
                    }
                    synchronized (reserverAccounts) {
                        reserverAccounts.remove(buyerAccount);
                    }
                    synchronized (reservedGoods) {
                        reservedGoods.remove(buyerName);
                    }

                    /* Step 3: send confirmation message */

                    // prepare sale confirmation message
                    MapMessage confirmationMsg = eventSession.createMapMessage();
                    // includes: goods name (g.name)
                    confirmationMsg.setString("goodsName", g.name());
                    confirmationMsg.setBoolean("tradeSuccess", true);

                    // send reply (destination is buyerDest)
                    eventSender.send(buyerDest, confirmationMsg);
                } else {
                    /* Step 4: the buyer did not pay enough */
                    // reoffer the reserved goods and reply to the buyer
                    synchronized (reserverDestinations) {
                        reserverDestinations.remove(buyerName);
                    }
                    synchronized (reserverAccounts) {
                        reserverAccounts.remove(buyerAccount);
                    }
                    synchronized (reservedGoods) {
                        reservedGoods.remove(buyerName);
                    }
                    
                    synchronized(offeredGoods){
                        offeredGoods.put(g.name(), g);
                    }
                    
                    publishGoodsList(eventSender, eventSession);

                    MapMessage declineMsg = eventSession.createMapMessage();
                    declineMsg.setBoolean("tradeSuccess", false);

                    eventSender.send(buyerDest, declineMsg);
                }
            } else {
                System.out.println("Received unknown MapMessage:\n: " + msg);
            }
        } else {
            System.out.println("Received unknown message:\n: " + msg);
        }
    }

    /*
     * Main method, creates client instance and runs its loop
     */
    public static void main(String[] args) throws JMSException, IOException {
        if (args.length != 1) {
            System.err.println("Usage: ./client <clientName>");
            return;
        }

        // create connection to the broker.
        try (ActiveMQConnectionFactory connectionFactory = new ActiveMQConnectionFactory("tcp://localhost:61616");
             Connection connection = connectionFactory.createConnection()) {
            // create instance of the client
            Client client = new Client(args[0], connection);

            // perform client loop
            client.loop();
        }
    }
}
