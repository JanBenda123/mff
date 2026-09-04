package cz.cuni.mff.d3s.nswi080.messaging;

import javax.jms.Connection;
import javax.jms.JMSException;
import javax.jms.MapMessage;
import javax.jms.MessageConsumer;
import javax.jms.MessageProducer;
import javax.jms.Queue;
import javax.jms.Session;
import javax.jms.TextMessage;
import javax.jms.Topic;

import org.apache.activemq.artemis.jms.client.ActiveMQConnectionFactory;

public class LabActivity {
    public static void main(String[] args) throws JMSException {
        try (ActiveMQConnectionFactory connectionFactory = new ActiveMQConnectionFactory("tcp://lab.d3s.mff.cuni.cz:6004", "lab", "D2mA/CQMXEkaxGmp");
             Connection connection = connectionFactory.createConnection()) {
            connection.start();

            // Create an auto-acknowledged session
            Session session = connection.createSession(Session.AUTO_ACKNOWLEDGE);

            // Create a topic and a producer for the topic
            Topic topic = session.createTopic("LabTopic");
            MessageProducer producer = session.createProducer(topic);

            // Create a queue for the lab server to reply to
            Queue replyQueue = session.createTemporaryQueue();
            MessageConsumer consumer = session.createConsumer(replyQueue);

            // Create a message for the server: a map message is another kind of message
            MapMessage message = session.createMapMessage();

            // Set the "magicNumber" key on the message to 42
            message.setInt("magicNumber", 42);

            // Set our temporary queue as the reply-to queue
            message.setJMSReplyTo(replyQueue);

            // TODO Set the "sisUsername" key to your SIS username (not the student number)
            message.setString("sisUsername", "bendaja1");

            // Send the message
            producer.send(message);

            // Receive the reply from the lab server
            TextMessage reply = (TextMessage) consumer.receive();
            System.out.println(reply.getText());
        }
    }
}
