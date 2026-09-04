using System;
using IO;
using WordProcess;

internal class Program
{


    private static void Main(string[] args)
    {

        IOHandler iohandler = new IOHandler(args);
        iohandler.verifyArgs(3);
        Input input;
        try
        {
            input = new Input(new StreamReader(args[0].Trim()));
        }
        catch
        {
            Console.WriteLine("File Error");
            throw new Exception("File Exception");
        }

        ///ACTUAL PROGRAM
        Output output = new Output(new StreamWriter(args[1].Trim()));
    
        using (input)    
        using (output) {
            IWordProcess iwp = new TableCounter(output,args);
            iwp.processAllTokens(input);
        }
    }
}