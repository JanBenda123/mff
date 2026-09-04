using IO;
using System.Text;
using System.Linq;
using System;
using System.IO;
using System.Collections.Generic;

public enum TokenType { Word, EoL, EoI };

namespace IO {
    public sealed class  ErrorHandle {
        static private bool debugOn = false;
        public static void raise(string msg) {
            Console.WriteLine(msg);
            if (debugOn){
                throw new Exception(msg);
            }
            Environment.Exit(0);
        }
    }
    class IOHandler {
        private string[] args;
        public IOHandler(string[] args) {
            this.args = args; 
        }
        public void verifyArgs(int expectedArgNum) {
            if (args.Length != expectedArgNum)
            {
                ErrorHandle.raise("Argument Error");
            }
            try {
                if (int.Parse(args[2]) < 0) {
                    ErrorHandle.raise("Argument Error");
                }
            }
            catch {
                ErrorHandle.raise("Argument Error");
            }
        }
        public Input verifyInput() {
            try{
                Input input = new Input(new StreamReader(args[0].Trim()));
                return input;
            }
            catch {
                ErrorHandle.raise("File Error");
                return new Input(Console.In); //unreachable - this is just to quiet down syntax check
            }
        }
    }

    public struct Token {
        TokenType type { get; }
        string value;
        public Token(TokenType type) {
            if (type == TokenType.Word) {
                throw new Exception("Can't declare Word token using TokenType constructor");
            }
            this.type = type;
            this.value = null;
        }
        public Token(string value) {
            if (value.Length == 0) {
                throw new Exception("Word token can't be empty string");
            }
            type = TokenType.Word;
            this.value = value;
        }
        public TokenType getType() {
            return type;
        }

        public string getString() {
            if (type != TokenType.Word) {
                throw new Exception($"Can't get value of {type.ToString()} Token");
            }
            return value; //hodnota zaruèenì nebude null. Jak se zbavit warningu?
        }




    
    }
    public interface ITokenGetter {
        public Token getNextToken();
    }
    
    class Buffer : IDisposable {
        TextReader reader;
        const int BUFFERSIZE = 4;
        char[] buffer = new char[BUFFERSIZE];
        int bufferIndex = 0;
        int bufferLength = 0; // To keep track of the actual number of characters in the buffer
        bool isAtEOI = false;

        public Buffer(TextReader tr) {
            reader = tr;
            FillBuffer();
        }

        public void Dispose() {
            reader.Dispose();
        }

        public int Peek() {
            if (isAtEOI) return -1; // End of input reached, return -1.

            if (bufferIndex >= bufferLength) // Check if all characters in the buffer are read
            {
                FillBuffer(); // Try to fill the buffer

                if (isAtEOI) return -1; // Check again if the end of input was reached during refill
            }

            return buffer[bufferIndex]; // Return the character at the current buffer index
        }

        public int Read() {
            int charValue = Peek(); // Use Peek to get the character
            if (charValue != -1) bufferIndex++; // Move to the next character if we haven't reached the end
            return charValue; // Return the character read
        }

        void FillBuffer() {
            if (isAtEOI) { return;} // If we've already reached the end of input, don't try to fill the buffer

            bufferIndex = 0;
            bufferLength = reader.ReadBlock(buffer, 0, BUFFERSIZE); // ReadBlock returns the number of characters read

            if (bufferLength == 0) // If no characters are read, we're at the end of the input
            {
                isAtEOI = true;
            }
        }
    }
    public class Input : ITokenGetter, IDisposable{
        Buffer buffer;

        bool isWhiteSpace(char ch) {
            int minusOne = -1;
            return ((ch == ' ') || (ch == '\n')|| (ch == '\r') || (ch == '\t') || (ch == (char)minusOne));
        }

        public Input(TextReader tr)
        {
            buffer = new Buffer(tr);
        }
        public void Dispose() {
            buffer.Dispose();
        }

        public Token getNextToken() {
            string buff = "";
            char c;
            if (buffer.Peek() == -1) {
                return new Token(TokenType.EoI);
            }
            while (isWhiteSpace((char) buffer.Peek())) //scroll past the whitespace
            {
                c = getNextChar();
                if (c == '\n')
                {
                    return new Token(TokenType.EoL);
                }
            }
            while (!isWhiteSpace((char) buffer.Peek())) 
            {
                buff += getNextChar();
            }
            return new Token(buff);
        }
  
        public char getNextChar() {
            if(buffer.Peek() == -1)
            {
                return '\0';
            }
            return (char) buffer.Read();
        }
        

        //TO BE REIMPLEMENTED
        //public Token getNextLineToken() {
        //    if (buffer.Peek() == -1){return new Token(TokenType.EoI); }
        //    string line = buffer.ReadLine();

        //    if (line.Length == 0) { return new Token(TokenType.EoL); }
        //    return new Token(line);
        //}

    }
    public class Output:IDisposable {
        TextWriter tw;
        public Output(TextWriter tw)
        {
            this.tw = tw;
        }
        public void writeLine<T>(T toAppend) {
            tw.WriteLine(toAppend);
            Console.WriteLine(toAppend);
        }
        public void write<T>(T toAppend)
        {
            tw.Write(toAppend);
            Console.Write(toAppend);
        }
        public void printNewlines(int numberOfNewlines) {
            while (numberOfNewlines > 0) {
                writeLine("");
                numberOfNewlines--;
            }
        }
        public override string ToString() {
            return tw.ToString().Replace("\r", "");
        }
        public void Dispose() {
            tw.Dispose();
        }
    }
}

namespace WordProcess {
    public interface IWordProcess {
        public void processAllTokens(ITokenGetter input);
    }
    public class TextFormatter : IWordProcess {
        Output output;
        int maxLineLength;
        int currentLineLength;
        int consecutiveEOLTokens = 0;
        int newlinesToPrint = 0;
        Queue<Token> tokenQueue = new Queue<Token>();

        public TextFormatter(Output output, string[] args)
        {
            this.output = output;
            try {
                this.maxLineLength = int.Parse(args[2]);
            }
            catch {
                ErrorHandle.raise("Argument Error");
            }
        }
        public void processAllTokens(ITokenGetter input){
            Token token = input.getNextToken();
            while (token.getType() != TokenType.EoI){
                processToken(token);
                token = input.getNextToken();

            }
            processToken(token);
            output.printNewlines(1);
        }
        void processToken(Token token){
            switch (token.getType()) {
                case TokenType.Word:
                    consecutiveEOLTokens = 0;
                    if (currentLineLength + token.getString().Length <= maxLineLength) {
                        addToQueue(token);
                    }
                    else {
                        formatLine();
                        addToQueue(token);
                    }
                    break;
                case TokenType.EoL:
                    consecutiveEOLTokens++;
                    if (consecutiveEOLTokens == 2 && tokenQueue.Count > 0) {
                        formatParagraph();
                    }
                    break;
                case TokenType.EoI:
                    if (tokenQueue.Count > 0) {
                        formatParagraph();
                    }
                    break;
            }
        }
        void addToQueue(Token token) { 
            tokenQueue.Enqueue(token);
            currentLineLength += token.getString().Length + 1; //+1 to account for a mandatory 1-char whitespace between words
        }
        void formatLine() {
            int queueLength = tokenQueue.Count;
            if (queueLength == 0) {
                return;
            }
            output.printNewlines(newlinesToPrint);
            newlinesToPrint = 1;
            
            
            if (queueLength == 1) {
                output.write(tokenQueue.Dequeue().getString());
                currentLineLength = 0;
                return;
            }

            int missingWhitespace = maxLineLength - currentLineLength+1;
            int totalSpaceLength = missingWhitespace / (queueLength - 1);
            int extraWhitespaceCount = missingWhitespace % (queueLength - 1);
            totalSpaceLength++; //one whitespace character was already accounted for during queue construction

            string spaceString = string.Concat(Enumerable.Repeat(" ", totalSpaceLength));
            int spacesWritten = 0;
            StringBuilder builder = new StringBuilder();

            while (true) { //runs until the queue is empty
                builder.Append(tokenQueue.Dequeue().getString());
                if (tokenQueue.Count == 0) {
                    break;
                }
                builder.Append(spaceString);
                if (spacesWritten < extraWhitespaceCount) {
                    builder.Append(" ");
                    spacesWritten++;
                }
            }
            currentLineLength = 0;
            output.write(builder.ToString());
        }
        void formatParagraph() {
            output.printNewlines(newlinesToPrint);
            newlinesToPrint = 2;

            StringBuilder builder = new StringBuilder();

            while (true) { //runs until the queue is empty
                builder.Append(tokenQueue.Dequeue().getString());
                if (tokenQueue.Count == 0) {
                    break;
                }
                builder.Append(" ");
            }
            currentLineLength = 0;
            output.write(builder.ToString());
        }

    }
}