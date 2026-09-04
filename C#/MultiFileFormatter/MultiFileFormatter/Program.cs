using IO;
using WordProcess;
using System;
using System.IO;

internal class Program
{
    private static void Main(string[] args)
    {
        IOHandler iohandler = new IOHandler(args);
        iohandler.ProcessInput();
        IDisposableTokenGetter input = new MultiReaderInput(new StreamReaderFactory(iohandler.inputFiles));

        ///ACTUAL PROGRAM
        ///
        Output output = new Output(Console.Out);
        try
        {
            output = new Output(new StreamWriter(iohandler.outputFile));
        }
        catch {
            Console.WriteLine("File Error");
            Environment.Exit(0);
        }

        using (input)    
        using (output) {
            IWordProcess iwp = new TextFormatter(output, iohandler.rowLength, iohandler.shouldHighlightSpaces);
            iwp.ProcessAllTokens(input);
        }
    }
} 