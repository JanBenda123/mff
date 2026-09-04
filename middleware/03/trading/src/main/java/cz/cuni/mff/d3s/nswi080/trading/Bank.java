package cz.cuni.mff.d3s.nswi080.trading;

import java.io.IOException;
import java.util.HashMap;
import java.util.Map;

import javax.jms.Connection;
import javax.jms.Destination;
import javax.jms.JMSException;
import javax.jms.MapMessage;
import javax.jms.Message;
import javax.jms.MessageConsumer;
import javax.jms.MessageListener;
import javax.jms.MessageProducer;
import javax.jms.Queue;
import javax.jms.Session;
import javax.jms.TextMessage;

import org.apache.activemq.artemis.jms.client.ActiveMQConnectionFactory;

public class Bank implements MessageListener {
    public static final String NEW_ACCOUNT_MSG = "NEW_ACCOUNT";             // Text message command to open a new account.
    public static final String ORDER_TYPE_KEY = "orderType";                // MapMessage key for order type.
    public static final int ORDER_TYPE_SEND = 1;                            // Order type "send money".
    public static final int ORDER_TYPE_GET_BALANCE = 2;                     // Order type "get balance"
    public static final String ORDER_RECEIVER_ACC_KEY = "receiverAccount";  // MapMessage key for receiver's account number.
    public static final String AMOUNT_KEY = "amount";                       // MapMessage key for amount of money transferred.
    public static final String BANK_QUEUE = "BankQueue";                    // The name of the queue for sending messages to the bank.
    public static final String REPORT_TYPE_KEY = "reportType";              // MapMessage key for report type.
    public static final int REPORT_TYPE_RECEIVED = 1;                       // Report type "received money".
    public static final String REPORT_SENDER_ACC_KEY = "senderAccount";     // MapMessage key for sender's account.
    private final Connection conn;                                          // Connection to the broker.
    private Session bankSession;                                            // Session for asynchronous event messages.
    private MessageProducer bankSender;                                     // Sender of (reply) messages, not bound to any destination.
    private MessageConsumer bankReceiver;                                   // The receiver of event messages.
    private Queue toBankQueue;                                              // The queue of incoming messages.
    private int lastAccount  = 1000000;                                     // The last assigned account number.
    private Map<String, Integer> clientAccounts = new HashMap<>();          // Maps client names to client account numbers.
    private Map<Integer, String> accountsClients = new HashMap<>();         // Maps client account numbers to client names.
    private Map<String, Destination> clientDestinations = new HashMap<>();  // Maps client names to client report destinations.

    private Map<Integer, Integer> accountBalances = new HashMap<>();        // Maps account numbers to account balances.
    private static final int initialBalance = 2000;

    // done: store and check account balance
    // in the current implementation, a transfer always succeeds
    // (1) check if the client has enough money
    // (2) if not, send a message that the transfer failed instead
    // (3) if yes, send the messages that the transfer succeeded and decrease the balance



    /*
     * Constructor, stores the broker connection and initializes maps.
     */
    private Bank(Connection conn) {
        this.conn = conn;
    }

    /*
     * Initializes messaging structures, starts listening for messages
     */
    private void init() throws JMSException {
        // create a non-transacted, auto acknowledged session
        bankSession = conn.createSession(false, Session.AUTO_ACKNOWLEDGE);

        // create queue for incoming messages
        toBankQueue = bankSession.createQueue(BANK_QUEUE);

        // create consumer of incoming messages
        bankReceiver = bankSession.createConsumer(toBankQueue);

        // receive messages asynchronously, using this object's onMessage()
        bankReceiver.setMessageListener(this);

        // create producer of messages, not bound to any destination
        bankSender = bankSession.createProducer(null);

        // start processing incoming messages
        conn.start();
    }

    /*
     * Gets the balance of the specified account number.
     */
    private int getBalance(int accountNumber) {
        synchronized(accountBalances){
            return accountBalances.getOrDefault(accountNumber, 0);
        }
        
    }

    /*
     * Handles text messages - in our case it's only the message requesting new account.
     */
    private void processTextMessage(TextMessage txtMsg) throws JMSException {
        // get the destination that client specified for replies
        // we will use it to send reply and also store it for transfer report messages
        Destination replyDest = txtMsg.getJMSReplyTo();
        // is it a NEW ACCOUNT message?
        if (NEW_ACCOUNT_MSG.equals(txtMsg.getText())) {
            // get the client's name stored as a property
            String clientName = txtMsg.getStringProperty(Client.CLIENT_NAME_PROPERTY);

            // store client's reply destination for future transfer reports
            clientDestinations.put(clientName, replyDest);

            int accountNumber;
            // either assign new account number or return already known number
            if (clientAccounts.get(clientName) != null) {
                accountNumber = clientAccounts.get(clientName);
            } else {
                accountNumber = lastAccount++;
                // also store the newly assigned number
                clientAccounts.put(clientName, accountNumber);
                accountsClients.put(accountNumber, clientName);

                accountBalances.put(accountNumber, initialBalance);
            }

            System.out.println("Connected client " + clientName + " with account " + accountNumber);

            // create reply TextMessage with the account number
            TextMessage reply = bankSession.createTextMessage(String.valueOf(accountNumber));
            // send the reply to the provided reply destination
            bankSender.send(replyDest, reply);
        } else {
            System.out.println("Received unknown text message: " + txtMsg.getText());
            System.out.println("Full message info:\n" + txtMsg);
        }
    }

    /*
     * Handles map messages - in our case it's only the message ordering money transfer to a receiver account.
     */
    private void processMapMessage(MapMessage mapMsg) throws JMSException {
        // get the order type number
        int order = mapMsg.getInt(ORDER_TYPE_KEY);

        // process order to transfer money
        if (order == ORDER_TYPE_SEND) {
            
            String clientName = mapMsg.getStringProperty(Client.CLIENT_NAME_PROPERTY);

            int clientAccount = clientAccounts.get(clientName);
            int destAccount = mapMsg.getInt(ORDER_RECEIVER_ACC_KEY);
            String destName = accountsClients.get(destAccount);
            Destination dest = clientDestinations.get(destName);
            int amount = mapMsg.getInt(AMOUNT_KEY);

            MapMessage reportMsg = bankSession.createMapMessage();

            int clientBalance = getBalance(clientAccount);
            int destBalance = getBalance(destAccount);
            if (clientBalance >= amount && amount >= 0){
                System.out.println("Transferring $" + amount + " from account " + clientAccount + " to account " + destAccount);

                synchronized(accountBalances){
                    accountBalances.put(clientAccount, clientBalance-amount);
                    accountBalances.put(destAccount, destBalance+amount);
                }
                

                reportMsg.setInt(AMOUNT_KEY, amount);
            }
            else{
                // No money were sent
                reportMsg.setInt(AMOUNT_KEY, 0);
            }

            reportMsg.setInt(REPORT_TYPE_KEY, REPORT_TYPE_RECEIVED);
            reportMsg.setInt(REPORT_SENDER_ACC_KEY, clientAccount);
            bankSender.send(dest, reportMsg);
        }
        else if (order == ORDER_TYPE_GET_BALANCE) {
            int destAccount = mapMsg.getInt(ORDER_RECEIVER_ACC_KEY);

            int balance = getBalance(destAccount);

            TextMessage reply = bankSession.createTextMessage(String.valueOf(balance));

            bankSender.send(mapMsg.getJMSReplyTo(), reply);
        } 
        else {
            System.out.println("Received unknown MapMessage:\n" + mapMsg);
        }
    }

    /*
     * Reacts to an asynchronously received message.
     */
    @Override
    public void onMessage(Message msg) {
        // distinguish type of message and call appropriate handler
        try {
            if (msg instanceof TextMessage) {
                processTextMessage((TextMessage) msg);
            } else if (msg instanceof MapMessage) {
                processMapMessage((MapMessage) msg);
            } else {
                System.out.println("Received unknown message:\n: " + msg);
            }
        } catch (JMSException e) {
            throw new RuntimeException(e);
        }
    }

    /*
     * Main method, creates a connection to the broker and a {@link Bank} instance.
     */
    public static void main(String[] args) throws JMSException, IOException {
        // create connection to the broker.

        try (ActiveMQConnectionFactory connectionFactory = new ActiveMQConnectionFactory("tcp://localhost:61616");
             Connection connection = connectionFactory.createConnection()) {
            // create a bank instance
            Bank bank = new Bank(connection);
            // initialize bank's messaging
            bank.init();

            // bank now listens to asynchronous messages on another thread
            // wait for user before quit
            System.out.println("Bank running. Press enter to quit");

            System.in.read();

            System.out.println("Stopping...");
        }
    }
}
