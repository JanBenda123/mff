using System;
using System.IO;
using System.Collections.Generic;
using IO;
using System.Data;
using System.Runtime.InteropServices;

public enum TokenType { Word, EoL, EoI };

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
                Environment.Exit(0);
                throw new Exception("Argument Error");
            }
        }
        public Input verifyInput() {
            try
            {
                Input input = new Input(new StreamReader(args[0].Trim()));
                return input;
            }
            catch
            {
                Console.WriteLine("File Error");
                Environment.Exit(0);
                throw new Exception("File Exception");
            }
        }
    }

    public class Token {
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
    public interface ITokenGetter {
        public Token getNextToken();
    }
    public class Input : ITokenGetter, IDisposable{
        TextReader tr;
        bool isWhiteSpace(char ch) {
            int minusOne = -1;
            return ((ch == ' ') || (ch == '\n')|| (ch == '\r') || (ch == '\t') || (ch == (char)minusOne));
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
    public class Output:IDisposable {
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

    public class TableCounter : IWordProcess
    {
        string sumOverName;
        Output output;
        int colnumber = 0;
        LinkedList<LinkedList<string>> cols = new LinkedList<LinkedList<string>>();
        public TableCounter(Output output, string[] args)
        {
            sumOverName = args[2].Trim();
            this.output = output;
        }
        void error(string type, string msg)
        {
            Console.WriteLine(type);
            //Environment.Exit(0);
            throw new Exception($"{type}: " + msg);
        }
        void print(int val)
        {
            output.write($"{sumOverName}\n");
            for (int i = 0; i < sumOverName.Length; i++) { output.write('-'); }
            output.write($"\n{val}");
        }

        public void processAllTokens(ITokenGetter input)
        {
            TokenType processTableRowOutcome;
            processTableRowOutcome = processTableHeader(input);

            while (processTableRowOutcome == TokenType.EoL){
                processTableRowOutcome = processTableRow(input);
            }
            evaluate();

        }
        TokenType processTableHeader(ITokenGetter input)
        {
            Token token = input.getNextToken();
            if (token.getType() == TokenType.EoI) { error("Invalid File Format","empty file"); }
            if (token.getType() == TokenType.EoL) { error("Invalid File Format", "file starts with a newline"); }


            while (token.getType() == TokenType.Word) //loads table header
            {
                LinkedList<string> header = new LinkedList<string>();
                header.AddLast(token.getString());
                colnumber++;
                cols.AddLast(header);
                token = input.getNextToken();
            }

            return token.getType();
        }
        TokenType processTableRow(ITokenGetter input) //returns the type of last token
        {
            Token token = input.getNextToken();
            if (token.getType() == TokenType.EoL) { error("Invalid File Format", "multiple newline"); }
            if (token.getType() == TokenType.EoI) { return TokenType.EoI; }

            foreach (LinkedList<string> column in cols)
            {
                if (token.getType() != TokenType.Word) { error("Invalid File Format", "not enough words per line"); }
                column.AddLast(token.getString());
                token = input.getNextToken();
            }

            if (token.getType() == TokenType.Word) { error("Invalid File Format", "too many words per line"); }
            return token.getType();
        }
        void evaluate()
        {
            LinkedList<string>? targetColumn = null;
            foreach (LinkedList<string> column in cols)
            {
                if (column.First.Value == sumOverName)
                {
                    targetColumn = column;
                    break;
                }
            }
            if (targetColumn == null) { error("Non-existent Column Name", ""); }
            targetColumn.RemoveFirst(); //removes column name
            if (targetColumn.Count == 0)
            {
                print(0);
                return;
            }
            int columnSum = 0;

            foreach (string cell in targetColumn)
            {
                try
                {
                    columnSum += Convert.ToInt32(cell);
                }
                catch
                {
                    error("Invalid Integer Value", "");
                }
            }
            print(columnSum);
        }
    }
}