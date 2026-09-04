using System.IO;


namespace xUnitExcel
{
    public class Excel0FunctionTestsLegacy
    {
        [Fact]
        public void DoNothingTest(){
            string inputStr = """
                1 1
                [] []
                """;
            string outputStr = """
                1 1
                [] []
                """;

            Output output = new Output(new StringWriter());
            Program.Execute(new Input(new StringReader(inputStr)), output);
            Assert.Equal(outputStr,output.ToString());
        }
        [Fact]
        public void UnevenLinesTest() {
            string inputStr = """
                1 1 1
                [] []
                1
                """;
            string outputStr = """
                1 1 1
                [] []
                1
                """;

            Output output = new Output(new StringWriter());
            Program.Execute(new Input(new StringReader(inputStr)), output);
            Assert.Equal(outputStr,output.ToString());
        }
        [Fact]
        public void EmptyLineTest() {
            string inputStr = """
                1 1 1
                
                1
                """;
            string outputStr = """
                1 1 1
                
                1
                """;

            Output output = new Output(new StringWriter());
            Program.Execute(new Input(new StringReader(inputStr)), output);
            Assert.Equal(outputStr,output.ToString());
        }
        [Fact]
        public void EmptyFileTest() {
            string inputStr = "";
            string outputStr = "";

            Output output = new Output(new StringWriter());
            Program.Execute(new Input(new StringReader(inputStr)), output);
            Assert.Equal(outputStr,output.ToString());
        }
        [Fact]
        public void DepthTwoExpression() {
            string inputStr = """
                1 1 1
                =A3+B3
                =A1+B1 =B1+C1
                """;
            string outputStr = """
                1 1 1
                4
                2 2
                """;

            Output output = new Output(new StringWriter());
            Program.Execute(new Input(new StringReader(inputStr)), output);
            Assert.Equal(outputStr,output.ToString());
        }
        [Fact]
        public void DepthTwoExpression2() {
            string inputStr = """
                1 =A1+B2 0
                2 =A1+C1 0
                """;
            string outputStr = """
                1 2 0
                2 1 0
                """;

            Output output = new Output(new StringWriter());
            Program.Execute(new Input(new StringReader(inputStr)), output);
            Assert.Equal(outputStr,output.ToString());
        }
        [Fact]
        public void AccessingUnknownCell() {
            string inputStr = """
                1 =A1+B10 0
                [] []
                """;
            string outputStr = """
                1 1 0
                [] []
                """;

            Output output = new Output(new StringWriter());
            Program.Execute(new Input(new StringReader(inputStr)), output);
            Assert.Equal(outputStr,output.ToString());
        }
        [Fact]
        public void OperationsTest() {
            string inputStr = """
                7 4
                =A1+B1
                =A1-B1
                =A1*B1
                =A1/B1
                =B1-A1
                """;
            string outputStr = """
                7 4
                11
                3
                28
                1
                -3
                """;

            Output output = new Output(new StringWriter());
            Program.Execute(new Input(new StringReader(inputStr)), output);
            Assert.Equal(outputStr,output.ToString());
        }
    }
    public class Excel1ErrorTestsLegacy {
        [Fact]
        public void ZeroDivisionTest() {
            string inputStr = """
                1 0
                =A1/B1
                """;
            string outputStr = """
                1 0
                #DIV0
                """;

            Output output = new Output(new StringWriter());
            Program.Execute(new Input(new StringReader(inputStr)), output);
            Assert.Equal(outputStr, output.ToString());
        }

        [Fact]
        public void ErrorCellReferenceTest() {
            string inputStr = """
                1 0
                =A1/B1 =A2+A1
                """;
            string outputStr = """
                1 0
                #DIV0 #ERROR
                """;

            Output output = new Output(new StringWriter());
            Program.Execute(new Input(new StringReader(inputStr)), output);
            Assert.Equal(outputStr, output.ToString());
        }

        [Fact]
        public void ParsingErrorTest() {
            string inputStr = """
                1
                autobus =A2+A1
                =A1 =A3+A1
                =autobus =A4+A1
                =A1+autobus =A5+A1
                """;
            string outputStr = """
                1
                #INVVAL #ERROR
                #MISSOP #ERROR
                #MISSOP #ERROR
                #FORMULA #ERROR
                """;

            Output output = new Output(new StringWriter());
            Program.Execute(new Input(new StringReader(inputStr)), output);
            Assert.Equal(outputStr, output.ToString());
        }



        [Fact]
        public void CellParsingErrorTest() {
            string inputStr = """
                1
                =A1+A0
                =A1+A01
                =A1+A1A1
                =A1+A
                =A1+A1.2
                """;
            string outputStr = """
                1
                #FORMULA
                #FORMULA
                #FORMULA
                #FORMULA
                #FORMULA
                """;

            Output output = new Output(new StringWriter());
            Program.Execute(new Input(new StringReader(inputStr)), output);
            Assert.Equal(outputStr, output.ToString());
        }
        [Fact]
        public void NegativeIndexParseErrorTest() {
            string inputStr = """
                1
                =A1+A-1
                """;
            string outputStr = """
                1
                #FORMULA
                """;

            Output output = new Output(new StringWriter());
            Program.Execute(new Input(new StringReader(inputStr)), output);
            Assert.Equal(outputStr, output.ToString());
        }
        [Fact]
        public void ParseEmptyCellErrorTest() {
            string inputStr = """
                1
                =A1+
                =+
                """;
            string outputStr = """
                1
                #FORMULA
                #FORMULA
                """;

            Output output = new Output(new StringWriter());
            Program.Execute(new Input(new StringReader(inputStr)), output);
            Assert.Equal(outputStr, output.ToString());
        }

    }
    public class Excel1CycleTestsLegacy {
        [Fact]
        public void EasyCycleTest() {
            string inputStr = """
                1 2
                =A1+B2 =A1+A2 
                """;
            string outputStr = """
                1 2
                #CYCLE #CYCLE
                """;

            Output output = new Output(new StringWriter());
            Program.Execute(new Input(new StringReader(inputStr)), output);
            Assert.Equal(outputStr, output.ToString());
        }
        [Fact]
        public void SelfCycleTest() {
            string inputStr = """
                =A1+A2 1  
                """;
            string outputStr = """
                #CYCLE 1
                """;

            Output output = new Output(new StringWriter());
            Program.Execute(new Input(new StringReader(inputStr)), output);
            Assert.Equal(outputStr, output.ToString());
        }
        [Fact]
        public void OffCycleStartTest() {
            string inputStr = """
                =A2+B1 =C1+D1 =C2+D1 1
                1      =B1+B3 =B2+C3
                []     1      1
                """;
            string outputStr = """
                #ERROR #CYCLE #CYCLE 1
                1 #CYCLE #CYCLE
                [] 1 1
                """;

            Output output = new Output(new StringWriter());
            Program.Execute(new Input(new StringReader(inputStr)), output);
            Assert.Equal(outputStr, output.ToString());
        }
        [Fact]
        public void CycleWithDowntreamEvaluationTest() {
            string inputStr = """
                =A2+B1 =A1+C1 =D1+C2 1
                1      []     1 
                """;
            string outputStr = """
                #CYCLE #CYCLE 2 1
                1 [] 1
                """;

            Output output = new Output(new StringWriter());
            Program.Execute(new Input(new StringReader(inputStr)), output);
            Assert.Equal(outputStr, output.ToString());
        }
        [Fact]
        public void NestedCycleTest() {
            string inputStr = """
                =B2+C3 =A1+C1 1
                =A1+A3 =B1+A2 []
                1      []     1
                """;
            string outputStr = """
                #CYCLE #CYCLE 1
                #CYCLE #CYCLE []
                1 [] 1
                """;

            Output output = new Output(new StringWriter());
            Program.Execute(new Input(new StringReader(inputStr)), output);
            Assert.Equal(outputStr, output.ToString());
        }
    }
}