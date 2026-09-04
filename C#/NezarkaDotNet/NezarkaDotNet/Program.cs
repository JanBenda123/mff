using NezarkaBookstore;
using NezarkaDotNet;
using System.Collections.Concurrent;
using System.IO;
using System;

namespace NezarkaDotNet { 
   
    internal class InputHandler {
        /*/
        static TextReader _src = new StreamReader("NezarkaTest.in");
        /*/
        static TextReader _src = Console.In;
        /**/
        public static Controller GenerateController() {
            ModelStore modelStore = ModelStore.LoadFrom(_src);
            if (modelStore == null) {
                Console.Write("Data error.");
                Environment.Exit(0);
            }
            return new Controller(modelStore);
        }

        public static string[]? LoadNextCommand() {
            try {
                string? command = _src.ReadLine();
                if (command == null) {
                    return null;
                }
                return command.Split(' ');
            }
            catch {
                Console.Write("Data error.");
                Environment.Exit(0);
                return null;
            }
        }
    }
}

internal class Program {
    /*/
    static TextWriter output = new StreamWriter("file.out");
    /*/
    static TextWriter output = Console.Out;
    /**/
    static void Main(string[] args) {
        Controller c = InputHandler.GenerateController();

        while (true) {
            string[] commandWords = InputHandler.LoadNextCommand();
            if (commandWords != null) {
                string responseHTML = c.ProcessCommand(commandWords);
                output.Write(responseHTML);
                output.WriteLine("====");
                output.Flush();
            }
            else {
                break;
            }
            
        }






    }
}