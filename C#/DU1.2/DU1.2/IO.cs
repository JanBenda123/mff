using IO;
using System;
using System.IO;
using System.Collections.Generic;

enum TokenType { Word, EoL, EoI };

namespace IO {
    class IOHandler {
        private string[] args;
        public IOHandler(string[] args) {
            this.args = args; 
        }
        public void verifyArgs(int expectedArgNum) {
            if (args.Length != expectedArgNum)
            {
                Console.WriteLine("Argument Error");
                throw new Exception("Argument Error");
            }
        }

    }

    class Token {
        TokenType type { get; }
        string? value;
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
    interface ITokenGetter {
        public Token getNextToken();
    }
    class Input : ITokenGetter, IDisposable{
        TextReader tr;
        bool isWhiteSpace(char ch) {
            return ((ch == ' ') || (ch == '\n') || (ch == '\t'));
        }

        public Input(TextReader tr)
        {
            this.tr = tr;
        }
        public void Dispose() {
            tr.Dispose();
        }

        public Token getNextToken() {
            string buff = "";
            char c;
            if (tr.Peek() == -1) {
                return new Token(TokenType.EoI);
            }
            while (isWhiteSpace((char)tr.Peek())) //scroll past the whitespace
            {
                c = getNextChar();
                if (c == '\n')
                {
                    return new Token(TokenType.EoL);
                }
            }
            while (!isWhiteSpace((char)tr.Peek())) 
            {
                buff += getNextChar();
            }
            return new Token(buff);
        }
  
        public char getNextChar() {
            if(tr.Peek() == -1)
            {
                return '\0';
            }
            return (char)tr.Read();
        }

        
        public Token getNextLineToken() {
            if (tr.Peek() == -1){return new Token(TokenType.EoI); }
            string line = tr.ReadLine();

            if (line.Length == 0) { return new Token(TokenType.EoL); }
            return new Token(line);
        }

    }
    class Output:IDisposable {
        TextWriter tw;
        public Output(TextWriter tw)
        {
            this.tw = tw;
        }
        public void writeLine<T>(T toAppend) {
            tw.WriteLine(toAppend);
        }
        public void write<T>(T toAppend)
        {
            tw.Write(toAppend);
        }
        public void Dispose() {
            tw.Dispose();
        }
    }
}

namespace WordProcess {
    interface IWordProcess {
        public void processAllTokens(ITokenGetter input);
    }
    class CountWordsInParagraph : IWordProcess
    {
        Output output;
        int wordCount = 0;
        int consecutiveNewlineCounter = 0;

        public CountWordsInParagraph(Output output)
        {
            this.output = output;
        }
        void processToken(Token token)
        {
            switch (token.getType())
            {
                case TokenType.Word:
                    wordCount++;
                    consecutiveNewlineCounter = 0;
                    break;

                case TokenType.EoL:
                    consecutiveNewlineCounter++;
                    if (consecutiveNewlineCounter == 2)
                    {// condition for new paragraph
                        output.writeLine(wordCount);
                        wordCount = 0;
                    }
                    break;

                case TokenType.EoI:
                    if (wordCount != 0)
                    {
                        output.writeLine(wordCount);
                    }
                    break;
            }
        }
        public void processAllTokens(ITokenGetter input) { 
            Token token = input.getNextToken();
            while (token.getType() != TokenType.EoI) {
                processToken(token);
                token = input.getNextToken();

            }
            processToken(token);
        }
        public void finish() { }
    }

    class TableCounter : IWordProcess {
        string sumOverName;
        Output output;
        int colnumber = 0;
        LinkedList<LinkedList<string>> rows = new LinkedList<LinkedList<string>>();
        public TableCounter(Output output, string[] args) {
            sumOverName = args[2].Trim();
            this.output = output;
        }
        void fileError() {
            Console.WriteLine("File Error");
            throw new Exception("File Error");
        }

        public void processAllTokens(ITokenGetter input) {
            processTableHeader(input);


        }
        void processTableHeader(ITokenGetter input) {
            Token token = input.getNextToken();
            if (token.getType() == TokenType.EoI) { fileError(); }
            if (token.getType() == TokenType.EoL) { fileError(); }

            LinkedList<string> header = new LinkedList<string>(); ;
            while (token.getType() == TokenType.Word) //loads table header
            {
                header.AddLast(token.getString());
                colnumber++;
                token = input.getNextToken();
            }
            rows.AddLast(header);
        }

        TokenType processTableRow(ITokenGetter input) //returns the type of last token
        {
            Token token = input.getNextToken();
            if (token.getType() == TokenType.EoL) { fileError(); } //multiple newline error
            LinkedList<string> row = new LinkedList<string>();

            for (int col = 0; col < colnumber; col++) {
                if (token.getType() != TokenType.Word) { fileError(); } //not enough words per line error
                row.AddLast(token.getString());
                token = input.getNextToken();
            }

            if (token.getType() == TokenType.Word) { fileError(); } //too many words per line error
            return token.getType();
        }

    }

}