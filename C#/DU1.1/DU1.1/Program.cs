using System;
using IO;

internal class Program {
    private static void Main(string[] args) {
        /// INPUT HANDLING
        Input input = new Input();
        if (args.Length != 1)
        {
            Console.WriteLine("Argument Error");
            Environment.Exit(0);
        }

        if (!input.readFile(args[0].Trim()))
        {
            Console.WriteLine("File Error");
            Environment.Exit(0);
        }


        ///ACTUAL PROGRAM
        int wordCount = 0;
        bool inWord = false;                            // keeps track if we're in the middle of the word

        char ch = input.getNextChar();
        while (ch != '\0') {
            if (!inWord && !Char.IsWhiteSpace(ch)) {     //Entering new word
                wordCount++;
                inWord = true;
            }

            else if (inWord && Char.IsWhiteSpace(ch)){ //Exiting word
                inWord = false;
            }

            ch = input.getNextChar();
        }

        Console.WriteLine(wordCount);
    }
}