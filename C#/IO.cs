using System;
using System.IO;

namespace IO { 
    class Input{
        string text;
        int itPointer;
        public Input() {
            itPointer = 0;
        }
        public bool readFile(string filename) {
            try
            {
                text = File.ReadAllText(filename); 
            }
            catch {
                return false;
            }
            return true;
        }
        public char getNextChar() {
            char c;
            try{
                c = text[itPointer];
            }
            catch {
                //Console.WriteLine("Err: No more characters to read.");
                return '\0';
            }
            itPointer++;
            return c;
        }
    }

    class Output {
        string text;
        public Output() { 
            text = "";
        }
        public void addLine(string toAppend) {
            if (text != "") {
                text += "\n";
            }
            text +=  toAppend;
        }
        public void addChar(char c) {
            text += c; 
        }
        public void printc() {
            Console.WriteLine(text);
        }
        public void printf(string filename) {
            string target = AppDomain.CurrentDomain.BaseDirectory + filename;
            StreamWriter outputFile = new StreamWriter(target);
            //Console.WriteLine("written to: " + target);
            outputFile.WriteLine(text);
            outputFile.Dispose();
        }
    }
}