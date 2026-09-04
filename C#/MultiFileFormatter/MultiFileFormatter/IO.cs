using IO;
using System.Text;
using System.Linq;
using System;
using System.IO;
using System.Collections.Generic;
using WordProcess;
using System.Security.Cryptography.X509Certificates;

public enum TokenType { Word, EoL, EoI };

namespace IO {
    public sealed class  ErrorHandle {
        static private bool _debugOn = false;
        public static void Raise(string msg) {
            Console.WriteLine(msg);
            if (_debugOn) {
                throw new Exception(msg);
            }
            Environment.Exit(0);
        }
    } 
    class IOHandler {
        private string[] _args;
        public bool shouldHighlightSpaces { get; private set; } = false;
        public string outputFile { get; private set; }
        public int rowLength { get; private set; }
        public string[] inputFiles {get; private set; }
        public IOHandler(string[] args) {
            this._args = args;
        }
        public void ProcessInput() {
            if (_args[0] == "--highlight-spaces") {
                shouldHighlightSpaces = true;
                _args[0] = "";
            }
            int l = _args.Length;

            try {
                rowLength = int.Parse(_args[l-1]);
                _args[l-1] = "";
            }
            catch {
                ErrorHandle.Raise("Argument Error");
            }
            outputFile = _args[l - 2];
            _args[l - 2] = "";
            inputFiles = _args;
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
        public TokenType GetType() {
            return type;
        }

        public string GetString() {
            if (type != TokenType.Word) {
                throw new Exception($"Can't get value of {type.ToString()} Token");
            }
            return value; //hodnota zaruèenì nebude null. Jak se zbavit warningu?
        }

        public string Repr() {
            if (type == TokenType.Word) {
                return $"Type: {type}, Value: {value}";
            }
            return $"Type: {type}";
        }
        




    }
    public interface ITokenGetter {
        public Token GetNextToken();
    }
    public interface IDisposableTokenGetter : ITokenGetter, IDisposable {

    }
    class Buffer : IDisposable {
        TextReader _reader;
        const int _BUFFERSIZE = 4;
        char[] _buffer = new char[_BUFFERSIZE];
        int _bufferIndex = 0;
        int _bufferLength = 0; // To keep track of the actual number of characters in the buffer
        bool _isAtEOI = false;

        public Buffer(TextReader tr) {
            _reader = tr;
            FillBuffer();
        }

        public void Dispose() {
            _reader.Dispose();
        }

        public int Peek() {
            if (_isAtEOI) return -1; // End of input reached, return -1.

            if (_bufferIndex >= _bufferLength) // Check if all characters in the buffer are read
            {
                FillBuffer(); // Try to fill the buffer

                if (_isAtEOI) return -1; // Check again if the end of input was reached during refill
            }

            return _buffer[_bufferIndex]; // Return the character at the current buffer index
        }

        public int Read() {
            int charValue = Peek(); // Use Peek to get the character
            if (charValue != -1) _bufferIndex++; // Move to the next character if we haven't reached the end
            return charValue; // Return the character read
        }

        void FillBuffer() {
            if (_isAtEOI) { return;} // If we've already reached the end of input, don't try to fill the buffer

            _bufferIndex = 0;
            _bufferLength = _reader.ReadBlock(_buffer, 0, _BUFFERSIZE); // ReadBlock returns the number of characters read

            if (_bufferLength == 0) // If no characters are read, we're at the end of the input
            {
                _isAtEOI = true;
            }
        }
    }
    public class Input : IDisposableTokenGetter {
        Buffer _buffer;

        bool IsWhiteSpace(char ch) {
            int minusOne = -1;
            return ((ch == ' ') || (ch == '\n') || (ch == '\r') || (ch == '\t') || (ch == (char) minusOne));
        }

        public Input(TextReader tr) {
            _buffer = new Buffer(tr);
        }

        public Input(string filename) {
            _buffer = new Buffer(new StreamReader(filename));
        }

        public void Dispose() {
            _buffer.Dispose();
        }

        public Token GetNextToken() {
            string buff = "";
            char c;
            if (_buffer.Peek() == -1) {
                return new Token(TokenType.EoI);
            }
            while (IsWhiteSpace((char) _buffer.Peek())) //scroll past the whitespace
            {
                c = GetNextChar();
                if (c == '\n') {
                    return new Token(TokenType.EoL);
                }
                if (c == '\0' ) {
                    return new Token(TokenType.EoI);
                }
            }
            while (!IsWhiteSpace((char) _buffer.Peek())) {
                buff += GetNextChar();
            }
            return new Token(buff);
        }

        public char GetNextChar() {
            if (_buffer.Peek() == -1) {
                return '\0';
            }
            return (char) _buffer.Read();
        }

        

        //TO BE REIMPLEMENTED
        //public Token getNextLineToken() {
        //    if (buffer.Peek() == -1){return new Token(TokenType.EoI); }
        //    string line = buffer.ReadLine();

        //    if (line.Length == 0) { return new Token(TokenType.EoL); }
        //    return new Token(line);
        //}

    }
    public abstract class TextReaderFactory {
        string[] _readerParams;
        int _currentReaderIndex = 0;
        public bool lastAlreadyGiven { get; protected set; } = true;
        public TextReaderFactory(string[] readerParams) { 
            _readerParams = readerParams;
            if (_readerParams.Length > 0) {
                lastAlreadyGiven = false;
            }
        }
        protected abstract TextReader ProduceReader(string readerParam);

        public TextReader GetNextReader() {
            while (_currentReaderIndex < _readerParams.Length) {
                try {
                    TextReader tr = ProduceReader(_readerParams[_currentReaderIndex]);
                    _currentReaderIndex++;
                    return tr;
                }
                catch { _currentReaderIndex++; }
            }
            lastAlreadyGiven = true;
            return new StringReader("");
        }

    }
    public class StreamReaderFactory : TextReaderFactory {
        public StreamReaderFactory(string[] readerParams): base(readerParams) { }
        protected override TextReader ProduceReader(string readerParam) {
            return new StreamReader(readerParam);
        }
    }
    public class StringReaderFactory : TextReaderFactory {
        public StringReaderFactory(string[] readerParams) : base(readerParams) { }
        protected override TextReader ProduceReader(string readerParam) {
            return new StringReader(readerParam);
        }
    }
    public class MultiReaderInput : IDisposableTokenGetter {
        IDisposableTokenGetter _currentInput = new Input(new StringReader(""));
        TextReaderFactory _rf;

        public MultiReaderInput(TextReaderFactory rf) {
            _rf = rf; 
            LoadNextInput();
        }

        bool LoadNextInput() {
            IDisposableTokenGetter previousInput = _currentInput;
            _currentInput = new Input(_rf.GetNextReader());
            previousInput.Dispose();
            
            if (_rf.lastAlreadyGiven) {//fails the load if the last reader was already given
                return false;
            }
            return true;
        }
        public void Dispose() {
            _currentInput.Dispose();
        }
        public Token GetNextToken() {
            Token returnedToken = _currentInput.GetNextToken();

            while (returnedToken.GetType() == TokenType.EoI) {
                if (!LoadNextInput()) {
                    return new Token(TokenType.EoI);
                }
                returnedToken = _currentInput.GetNextToken();
            }
            return returnedToken;
        }
    }
    public class Output:IDisposable {
        TextWriter _tw;
        public Output(TextWriter tw)
        {
            this._tw = tw;
        }
        public void WriteLine<T>(T toAppend) {
            _tw.WriteLine(toAppend);
            Console.WriteLine(toAppend);
        }
        public void Write<T>(T toAppend)
        {
            _tw.Write(toAppend);
            Console.Write(toAppend);
        }
        public void PrintNewlines(int numberOfNewlines) {
            while (numberOfNewlines > 0) {
                WriteLine("");
                numberOfNewlines--;
            }
        }
        public void PrintRepeated(string str,int numberOfRepeats) {
            while (numberOfRepeats > 0) {
                Write(str);
                numberOfRepeats--;
            }
        }
        public override string ToString() {
            return _tw.ToString().Replace("\r", "");
        }
        public void Dispose() {
            _tw.Dispose();
        }
    }
}

namespace WordProcess {
    public interface IWordProcess {
        public void ProcessAllTokens(IDisposableTokenGetter input);
    }
    public class TextFormatter : IWordProcess {
        string _spaceString = " ";
        string _newlineString = Environment.NewLine;
        Output output;
        int _maxLineLength;
        int _currentLineLength;
        int _consecutiveEOLTokens = 0;
        int _newlinesToPrint = 0;
        Queue<Token> _tokenQueue = new Queue<Token>();

        public TextFormatter(Output output, int maxLineLength, bool shouldHighlightSpaces)
        {
            this.output = output;
            this._maxLineLength = maxLineLength;
            if (shouldHighlightSpaces) {
                _newlineString = "<-" + Environment.NewLine;
                _spaceString = ".";
            }
            
        }
        public void ProcessAllTokens(IDisposableTokenGetter input){
            Token token = input.GetNextToken();
            while (token.GetType() != TokenType.EoI){
                processToken(token);
                token = input.GetNextToken();
            }
            processToken(token);
            output.PrintRepeated(_newlineString,1);
        }
        void processToken(Token token){
            switch (token.GetType()) {
                case TokenType.Word:
                    _consecutiveEOLTokens = 0;
                    if (_currentLineLength + token.GetString().Length <= _maxLineLength) {
                        addToQueue(token);
                    }
                    else {
                        formatLine();
                        addToQueue(token);
                    }
                    break;
                case TokenType.EoL:
                    _consecutiveEOLTokens++;
                    if (_consecutiveEOLTokens == 2 && _tokenQueue.Count > 0) {
                        formatParagraph();
                    }
                    break;
                case TokenType.EoI:
                    if (_tokenQueue.Count > 0) {
                        formatParagraph();
                    }
                    break;
            }
        }
        void addToQueue(Token token) { 
            _tokenQueue.Enqueue(token);
            _currentLineLength += token.GetString().Length + 1; //+1 to account for a mandatory 1-char whitespace between words
        }
        void formatLine() {
            int queueLength = _tokenQueue.Count;
            if (queueLength == 0) {
                return;
            }
            output.PrintRepeated(_newlineString, _newlinesToPrint);
            _newlinesToPrint = 1;
            
            
            if (queueLength == 1) {
                output.Write(_tokenQueue.Dequeue().GetString());
                _currentLineLength = 0;
                return;
            }

            int missingWhitespace = _maxLineLength - _currentLineLength+1;
            int totalSpaceLength = missingWhitespace / (queueLength - 1);
            int extraWhitespaceCount = missingWhitespace % (queueLength - 1);
            totalSpaceLength++; //one whitespace character was already accounted for during queue construction

            string spaceString = string.Concat(Enumerable.Repeat(_spaceString, totalSpaceLength));
            int spacesWritten = 0;
            StringBuilder builder = new StringBuilder();

            while (true) { //runs until the queue is empty
                builder.Append(_tokenQueue.Dequeue().GetString());
                if (_tokenQueue.Count == 0) {
                    break;
                }
                builder.Append(spaceString);
                if (spacesWritten < extraWhitespaceCount) {
                    builder.Append(_spaceString);
                    spacesWritten++;
                }
            }
            _currentLineLength = 0;
            output.Write(builder.ToString());
        }
        void formatParagraph() {
            
            output.PrintRepeated(_newlineString, _newlinesToPrint);
            _newlinesToPrint = 2;

            StringBuilder builder = new StringBuilder();

            while (true) { //runs until the queue is empty
                builder.Append(_tokenQueue.Dequeue().GetString());
                if (_tokenQueue.Count == 0) {
                    break;
                }
                builder.Append(_spaceString);
            }
            _currentLineLength = 0;
            output.Write(builder.ToString());
        }

    }
}

