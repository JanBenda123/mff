using IO;
using System.Text;
using System.Linq;
using System;
using System.IO;
using System.Collections.Generic;
using System.Security.Cryptography.X509Certificates;
using Excel;

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
    }
    public class Output:IDisposable {
        TextWriter _tw;
        public Output(TextWriter tw)
        {
            this._tw = tw;
        }
        public void WriteLine<T>(T toAppend) {
            _tw.WriteLine(toAppend);
        }
        public void Write<T>(T toAppend)
        {
            _tw.Write(toAppend);
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
            return _tw.ToString();//.Replace("\r", "");
        }
        public void Dispose() {
            _tw.Dispose();
        }
        public void PrintTable(Table table) {
            for (int rowIndex = 0; rowIndex<table.Entries.Length; rowIndex++) {
                for (int colIndex = 0; colIndex < table.Entries[rowIndex].Length; colIndex++) {
                    Write(table.Entries[rowIndex][colIndex].ToString());
                    if (colIndex != table.Entries[rowIndex].Length-1) {
                        Write(" ");
                    }
                }
                if (rowIndex != table.Entries.Length - 1) {
                    WriteLine("");
                }
            }
        }
    }
}



