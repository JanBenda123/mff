using IO;
using ZapoctovvTest;
using System;

namespace Zapoctak {
    internal class Program {
        static void Main(string[] args) {
            Controller c = new Controller(new Output(Console.Out));
            //c.ProcessInput(new Input(new StreamReader("test2.in")));
            c.ProcessInput(new Input(Console.In));


        }
    }
}