using System;
using IO;
using System.IO;
using WordProcess;

internal class Program
{


    private static void Main(string[] args)
    {
        IOHandler iohandler = new IOHandler(args);
        iohandler.verifyArgs(3);
        Input input = iohandler.verifyInput();

        ///ACTUAL PROGRAM
        ///
        Output output = new Output(Console.Out);
        try
        {
            output = new Output(new StreamWriter(args[1].Trim()));
        }
        catch {
            Console.WriteLine("File Error");
            Environment.Exit(0);
        }
        using (input)    
        using (output) {
            IWordProcess iwp = new TableCounter(output, args);
            iwp.processAllTokens(input);
        }
    }
}