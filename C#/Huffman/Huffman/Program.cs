using HuffmanEncoderNS;
using System.Text;
using System;
using System.IO;


namespace Huffman {

    class Program {
        public static void ThrowError(string mess) {
            Console.WriteLine(mess);
            Environment.Exit(0);
        }
        static FileStream ProcessInput(string[] args) {
            if (args.Length != 1) { ThrowError("Argument Error"); }
            FileStream fileStream;
            try {
                fileStream = new FileStream(args[0], FileMode.Open);
                return fileStream;
            }
            catch {
                ThrowError("File Error");
                return new FileStream(args[0], FileMode.Open); // Unreachable - is here to make compiler stop complaining
            }
        
        }
        static void Main(string[] args) { 
            FileStream stream = ProcessInput(args);

            HuffmanEncoder huffmanEncoder = new HuffmanEncoder(stream);

            Console.WriteLine(huffmanEncoder.tree.ToString());
        } 
    }
}