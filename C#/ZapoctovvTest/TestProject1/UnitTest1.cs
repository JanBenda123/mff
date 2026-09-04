using IO;
using ZapoctovvTest;

namespace TestProject1 {
    public class UnitTest1 {
        [Fact]
        public void Test1() {
            StringWriter sw = new StringWriter();
            Controller c = new Controller(new Output(sw));
            c.ProcessInput(new Input(new StreamReader("test1.in")));
            StreamReader filesr = new StreamReader("test1.stdout");


            Assert.Equal(sw.ToString().Replace("\r",""), filesr.ReadToEnd().Replace("\r", ""));
        }

        [Fact]
        public void Test2() {
            StringWriter sw = new StringWriter();
            Controller c = new Controller(new Output(sw));
            c.ProcessInput(new Input(new StreamReader("test2.in")));
            StreamReader filesr = new StreamReader("test2.stdout");


            Assert.Equal(sw.ToString().Replace("\r", ""), filesr.ReadToEnd().Replace("\r", ""));
        }

        [Fact]
        public void Test3() {
            StringWriter sw = new StringWriter();
            Controller c = new Controller(new Output(sw));
            c.ProcessInput(new Input(new StreamReader("test3.in")));
            StreamReader filesr = new StreamReader("test3.stdout");


            Assert.Equal(sw.ToString().Replace("\r", ""), filesr.ReadToEnd().Replace("\r", ""));
        }

        [Fact]
        public void Invalid() {
            StringWriter sw = new StringWriter();
            Controller c = new Controller(new Output(sw));
            c.ProcessInput(new Input(new StreamReader("invalid.in")));
            StreamReader filesr = new StreamReader("invalid.stdout");


            Assert.Equal(sw.ToString().Replace("\r", ""), filesr.ReadToEnd().Replace("\r", ""));
        }
    }
}