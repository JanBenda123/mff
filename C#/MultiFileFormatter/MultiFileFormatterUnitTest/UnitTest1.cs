using Microsoft.VisualStudio.TestPlatform.Utilities;

namespace TextFormatterUnitX {
    public class LegacyUnitTests
    {
        [Theory]
        [InlineData("1ds fds fds fds fds fds fds", 5,false, "1ds\nfds\nfds\nfds\nfds\nfds\nfds\n")]                     //one word fit
        [InlineData("2ds fds fds fds fds fds fds", 10, false, "2ds    fds\nfds    fds\nfds    fds\nfds\n")]              // even long spaces
        [InlineData("3ds fds fds fds fds", 17, false, "3ds  fds  fds fds\nfds\n")]                                       //uneven long spaces
        [InlineData("4ds fds fds fds fds 12345678910 fds", 10, false, "4ds    fds\nfds    fds\nfds\n12345678910\nfds\n")]//long word text wrap
        [InlineData("5dsfdsfds", 2, false, "5dsfdsfds\n")]                                                               //one word input + short wrap
        [InlineData("6dsfdsfds", 20, false, "6dsfdsfds\n")]                                                              //one word input + long wrap
        //model example
        [InlineData("If a train station is where the train stops, what is a work station?", 17,false, "If     a    train\nstation  is where\nthe  train stops,\nwhat  is  a  work\nstation?\n")]
        public void OneParagraphBehavior(string inputText, int rowSize,bool shouldHighlightSpaces, string expectedOutput){ 

            //Arrange
            Input input = new Input(new StringReader(inputText));
            Output output = new Output(new StringWriter());
            //Act
            using (input)
            using (output){
                IWordProcess iwp = new TextFormatter(output, rowSize, shouldHighlightSpaces);
                iwp.ProcessAllTokens(input);
            }
            //Assert
            Assert.Equal(expectedOutput, output.ToString());
        }

        [Theory]
        [InlineData("1ds fds fds\n\n fds fds fds fds", 7,false, "1ds fds\nfds\n\nfds fds\nfds fds\n")] //standard input
        [InlineData("2ds fds fds\n\n fds\n\nfds fds fds", 7,false, "2ds fds\nfds\n\nfds\n\nfds fds\nfds\n")] //single paragraph word
        public void MultipleBehavior(string inputText, int rowSize, bool shouldHighlightSpaces, string expectedOutput) {
            //Arrange
            Input input = new Input(new StringReader(inputText));
            Output output = new Output(new StringWriter());
            //Act
            using (input)
            using (output) {
                IWordProcess iwp = new TextFormatter(output, rowSize, shouldHighlightSpaces);
                iwp.ProcessAllTokens(input);
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
            using (output){
                IWordProcess iwp = new TextFormatter(output, 40, false);
                iwp.ProcessAllTokens(input);
            }
            //Assert
            string expectedOutput;
            using (StreamReader expectedOutputStream = new StreamReader("LoremIpsum_Aligned.txt")) { 
                expectedOutput = expectedOutputStream.ReadToEnd();
            }
            Assert.Equal(expectedOutput, output.ToString());
        }
    }

    public class HighlightSpacesUnitTests {
        [Theory]
        [InlineData("1ds fds fds fds fds fds fds", 5, true, "1ds<-\nfds<-\nfds<-\nfds<-\nfds<-\nfds<-\nfds<-\n")]                     //one word fit
        [InlineData("2ds fds fds fds fds fds fds", 10, true, "2ds....fds<-\nfds....fds<-\nfds....fds<-\nfds<-\n")]              // even long spaces
        [InlineData("3ds fds fds fds fds", 17, true, "3ds..fds..fds.fds<-\nfds<-\n")]                                       //uneven long spaces
        [InlineData("4ds fds fds fds fds 12345678910 fds", 10, true, "4ds....fds<-\nfds....fds<-\nfds<-\n12345678910<-\nfds<-\n")]//long word text wrap
        [InlineData("5dsfdsfds", 2, true, "5dsfdsfds<-\n")]                                                               //one word input + short wrap
        [InlineData("6dsfdsfds", 20, true, "6dsfdsfds<-\n")]                                                              //one word input + long wrap
        //model example
        [InlineData("If a train station is where the train stops, what is a work station?", 17, true, "If.....a....train<-\nstation..is.where<-\nthe..train.stops,<-\nwhat..is..a..work<-\nstation?<-\n")]
        public void OneParagraphBehavior(string inputText, int rowSize, bool shouldHighlightSpaces, string expectedOutput) {

            //Arrange
            Input input = new Input(new StringReader(inputText));
            Output output = new Output(new StringWriter());
            //Act
            using (input)
            using (output) {
                IWordProcess iwp = new TextFormatter(output, rowSize, shouldHighlightSpaces);
                iwp.ProcessAllTokens(input);
            }
            //Assert
            Assert.Equal(expectedOutput, output.ToString());
        }

        [Theory]
        [InlineData("1ds fds fds\n\n fds fds fds fds", 7, true, "1ds.fds<-\nfds<-\n<-\nfds.fds<-\nfds.fds<-\n")] //standard input
        [InlineData("2ds fds fds\n\n fds\n\nfds fds fds", 7, true, "2ds.fds<-\nfds<-\n<-\nfds<-\n<-\nfds.fds<-\nfds<-\n")] //single paragraph word
        public void MultipleBehavior(string inputText, int rowSize, bool shouldHighlightSpaces, string expectedOutput) {
            //Arrange
            Input input = new Input(new StringReader(inputText));
            Output output = new Output(new StringWriter());
            //Act
            using (input)
            using (output) {
                IWordProcess iwp = new TextFormatter(output, rowSize, shouldHighlightSpaces);
                iwp.ProcessAllTokens(input);
            }
            //Assert
            Assert.Equal(expectedOutput, output.ToString());
        }
        [Fact]
        public void LoremIpsumTest() {
            //Arrange
            Input input = new Input(new StreamReader("LoremIpsum.txt"));
            Output output = new Output(new StringWriter());
            //Act
            using (input)
            using (output) {
                IWordProcess iwp = new TextFormatter(output, 40, true);
                iwp.ProcessAllTokens(input);
            }
            //Assert
            string expectedOutput;
            using (StreamReader expectedOutputStream = new StreamReader("LoremIpsum_Aligned_SpaceHighlight.txt")) {
                expectedOutput = expectedOutputStream.ReadToEnd();
            }
            Assert.Equal(expectedOutput, output.ToString());
        }
    }
}