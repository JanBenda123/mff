//using Microsoft.VisualStudio.TestPlatform.Utilities;

//namespace DU2._2_xUnit
//{
//    public class UnitTest1
//    {
//        [Fact]
//        public void NormalUse()
//        {
//            string inputString = "col1 col2 col3 \n 1 2 3 \n 1 3 4 \n 14 23 23\n";
//            string[] inputArgs = {"","","col2"};
//            string testResult = "col2\n----\n28";

//            //Arrange
//            Input input = new Input(new StringReader(inputString));
//            Output output = new Output(new StringWriter());
//            //Act
//            using (input)
//            using (output)
//            {
//                IWordProcess iwp = new TableCounter(output, inputArgs);
//                iwp.processAllTokens(input);
//            }
//            //Assert
//            Assert.Equal(testResult, output.ToString());
//        }
//        [Fact]
//        public void JustHeader()
//        {
//            string inputString = "col1 col2 col3 col4\n";
//            string[] inputArgs = { "", "", "col2" };
//            string testResult = "col2\n----\n0";

//            //Arrange
//            Input input = new Input(new StringReader(inputString));
//            Output output = new Output(new StringWriter());
//            //Act
//            using (input)
//            using (output)
//            {
//                IWordProcess iwp = new TableCounter(output, inputArgs);
//                iwp.processAllTokens(input);
//            }
//            //Assert
//            Assert.Equal(testResult, output.ToString());
//        }
//        [Fact]
//        public void HeaderDuplicity()
//        {
//            string inputString = "mesic   zbozi       typ         prodejce    mnozstvi    cena    trzba\nleden   brambory    tuzemske    Bartak      10895       12      130740\nleden   brambory    vlastni     Celestyn    15478       10      154780\nleden   jablka      dovoz       Adamec      1321        30      39630\n";
//            string[] inputArgs = { "", "", "cena" };
//            string testResult = "cena\n----\n52";

//            //Arrange
//            Input input = new Input(new StringReader(inputString));
//            Output output = new Output(new StringWriter());
//            //Act
//            using (input)
//            using (output)
//            {
//                IWordProcess iwp = new TableCounter(output, inputArgs);
//                iwp.processAllTokens(input);
//            }
//            //Assert
//            Assert.Equal(testResult, output.ToString());
//        }
//        [Fact]
//        public void shortLineError()
//        {
//            string inputString = "col1 col2 col3 \n 1 2 3 \n 1 3 4 \n 14 23";
//            string[] inputArgs = { "", "", "col2" };
//            string testResult = "Invalid File Format: not enough words per line";

//            //Arrange
//            Input input = new Input(new StringReader(inputString));
//            Output output = new Output(new StringWriter());
//            //Act
//            try
//            {
//                using (input)
//                using (output)
//                {
//                    IWordProcess iwp = new TableCounter(output, inputArgs);
//                    iwp.processAllTokens(input);
//                }
//            }
//            catch(Exception e) {
//                Assert.Equal(testResult, e.Message);
//            }
//            //Assert
            
//        }
//        [Fact]
//        public void longLineError()
//        {
//            string inputString = "col1 col2 col3 \n 1 2 3 \n 1 3 4 \n 14 23 11 11";
//            string[] inputArgs = { "", "", "col2" };
//            string testResult = "Invalid File Format: too many words per line";

//            //Arrange
//            Input input = new Input(new StringReader(inputString));
//            Output output = new Output(new StringWriter());
//            //Act
//            try
//            {
//                using (input)
//                using (output)
//                {
//                    IWordProcess iwp = new TableCounter(output, inputArgs);
//                    iwp.processAllTokens(input);
//                }
//            }
//            catch (Exception e)
//            {
//                //Assert
//                Assert.Equal(testResult, e.Message);
//            }
//        }
//        [Fact]
//        public void notSummableError()
//        {
//            string inputString = "col1 col2 col3 \n 1 fdsfd 3 \n 1 3 4 \n 14 23 11";
//            string[] inputArgs = { "", "", "col2" };
//            string testResult = "Invalid Integer Value: ";

//            //Arrange
//            Input input = new Input(new StringReader(inputString));
//            Output output = new Output(new StringWriter());
//            //Act
//            try
//            {
//                using (input)
//                using (output)
//                {
//                    IWordProcess iwp = new TableCounter(output, inputArgs);
//                    iwp.processAllTokens(input);
//                }
//            }
//            catch (Exception e)
//            {
//                //Assert
//                Assert.Equal(testResult, e.Message);
//            }
//        }
//        [Fact]
//        public void columnNotPresentError()
//        {
//            string inputString = "col1 col2 col3 \n 1 fdsfd 3 \n 1 3 4 \n 14 23 11";
//            string[] inputArgs = { "", "", "col5" };
//            string testResult = "Non-existent Column Name: ";

//            //Arrange
//            Input input = new Input(new StringReader(inputString));
//            Output output = new Output(new StringWriter());
//            //Act
//            try
//            {
//                using (input)
//                using (output)
//                {
//                    IWordProcess iwp = new TableCounter(output, inputArgs);
//                    iwp.processAllTokens(input);
//                }
//            }
//            catch (Exception e)
//            {
//                //Assert
//                Assert.Equal(testResult, e.Message);
//            }
//        }
//    }
//}