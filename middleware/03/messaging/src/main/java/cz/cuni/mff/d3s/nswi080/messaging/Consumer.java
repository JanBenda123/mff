package cz.cuni.mff.d3s.nswi080.messaging;

import javax.jms.*;

import org.apache.activemq.artemis.jms.client.ActiveMQConnectionFactory;

public class Consumer implements MessageListener {
    public static void main(String[] args) throws JMSException {
        // Create connection to the broker.
        // Note that the factory is usually obtained from JNDI, this method is ActiveMQ-specific
        // used here for simplicity
        try (ActiveMQConnectionFactory connectionFactory = new ActiveMQConnectionFactory("tcp://localhost:61616");
            Connection connection = connectionFactory.createConnection()){

            // Create an auto-acknowledged session
            Session session1 = connection.createSession(Session.AUTO_ACKNOWLEDGE);

            // Create a queue, name must match the queue created by producer
            // Note that this is also provider-specific and should be obtained from JNDI
            Queue queue1 = session1.createQueue("ExampleQueue1");

            // Create a consumer
            MessageConsumer consumer1 = session1.createConsumer(queue1);

            // Create and set an asynchronous message listener
            consumer1.setMessageListener(new Consumer());

            // Start processing messages
            connection.start();

            // Create another session, queue and consumer
            Session session2 = connection.createSession(false, Session.AUTO_ACKNOWLEDGE);
            Queue queue2 = session2.createQueue("ExampleQueue2");
            MessageConsumer consumer2 = session2.createConsumer(queue2);

            // Note that JMS connections, sessions, producers and consumer are designed to be reused
            // However, the second session is necessary because the first one is in use by the asynchronous consumer
            // and sessions are not thread safe

            // Receive a message synchronously
            Message msg = consumer2.receive();

            // Print the message
            if (msg instanceof TextMessage txt) {
                System.out.println("Synchronous: " + txt.getText());
            }
        }
    }

    // Asynchronously receive messages
    @Override
    public void onMessage(Message msg) {
        if (msg instanceof TextMessage txt) {
            try {
                System.out.println("Asynchronous: " + txt.getText());
            } catch (JMSException e) {
                throw new RuntimeException(e);
            }
        }
    }
}
