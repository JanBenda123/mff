using Microsoft.VisualStudio.TestPlatform.Utilities;

namespace DU3_xUnit
{
    public class UnitTest1
    {
        [Theory]
        [InlineData("1ds fds fds fds fds fds fds", 5, "1ds\nfds\nfds\nfds\nfds\nfds\nfds\n")]                     //one word fit
        [InlineData("2ds fds fds fds fds fds fds", 10, "2ds    fds\nfds    fds\nfds    fds\nfds\n")]              // even long spaces
        [InlineData("3ds fds fds fds fds", 17, "3ds  fds  fds fds\nfds\n")]                                       //uneven long spaces
        [InlineData("4ds fds fds fds fds 12345678910 fds", 10, "4ds    fds\nfds    fds\nfds\n12345678910\nfds\n")]//long word text wrap
        [InlineData("5dsfdsfds", 2, "5dsfdsfds\n")]                                                               //one word input + short wrap
        [InlineData("6dsfdsfds", 20, "6dsfdsfds\n")]                                                              //one word input + long wrap
        //model example
        [InlineData("If a train station is where the train stops, what is a work station?", 17, "If     a    train\nstation  is where\nthe  train stops,\nwhat  is  a  work\nstation?\n")]
        public void OneParagraphBehavior(string inputText, int rowSize, string expectedOutput){ 
            string[] inputArgs = { "", "", rowSize.ToString() };

            //Arrange
            Input input = new Input(new StringReader(inputText));
            Output output = new Output(new StringWriter());
            //Act
            using (input)
            using (output){
                IWordProcess iwp = new TextFormatter(output, inputArgs);
                iwp.processAllTokens(input);
            }
            //Assert
            Assert.Equal(expectedOutput, output.ToString());
        }

        [Theory]
        [InlineData("1ds fds fds\n\n fds fds fds fds", 7, "1ds fds\nfds\n\nfds fds\nfds fds\n")] //standard input
        [InlineData("2ds fds fds\n\n fds\n\nfds fds fds", 7, "2ds fds\nfds\n\nfds\n\nfds fds\nfds\n")] //single paragraph word
        public void MultipleBehavior(string inputText, int rowSize, string expectedOutput)
        {
            string[] inputArgs = { "", "", rowSize.ToString() };

            //Arrange
            Input input = new Input(new StringReader(inputText));
            Output output = new Output(new StringWriter());
            //Act
            using (input)
            using (output)
            {
                IWordProcess iwp = new TextFormatter(output, inputArgs);
                iwp.processAllTokens(input);
            }
            //Assert
            Assert.Equal(expectedOutput, output.ToString());
        }
        [Fact]
        public void LoremIpsumTest()
        {
            //Arrange
            Input input = new Input(new StreamReader("LoremIpsum.txt"));
            Output output = new Output(new StringWriter());
            //Act
            
            using (input)
            using (output)
            {
                IWordProcess iwp = new TextFormatter(output,new string[] { "", "", "40" });
                iwp.processAllTokens(input);
            }

            string expectedOutput;
            using (StreamReader expectedOutputStream = new StreamReader("LoremIpsum_Aligned.txt")) { 
                expectedOutput = expectedOutputStream.ReadToEnd();
            }
                Assert.Equal(expectedOutput, output.ToString());


        }
    }
}