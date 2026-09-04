using IO;
using System;
using System.IO;

namespace Excel {
    public class Program {

        static Input InputHandler(string[] args) {
            if (args.Length != 2) {
                
                throw new ArgumentException("Wrong count of arguments");
            }
            try {
                return new Input(new StreamReader(args[0]));
            }
            catch {
                
                throw new FileLoadException("Cound not open the file");
            }
        }

        public static void Execute(Input input, Output output) {
            TableParser tp = new TableParser(input);
            Table table = tp.Parse();
            Workbook workbook = new Workbook(table);
            Evaluator evaluator = new Evaluator(workbook);
            table = evaluator.EvaluateTable(table);
            output.PrintTable(table);
        }
        static void Main(string[] args) {

            try {
                using (Input input = InputHandler(args)) {
                    using (Output output = new Output(new StreamWriter(args[1]))) {
                        Execute(input, output);
                    }
                }
            }
            catch (FileLoadException e) {
                Console.WriteLine("File Error");
            }
            catch (ArgumentException e) {
                Console.WriteLine("Argument Error");
            }
        }
    }
}