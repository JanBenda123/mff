namespace MultiFileFormatterUnitTest {
    public class MultifileTest {
        [Fact]
        public void StandardInputOneFile() {
            //Arrange
            string[] testStrings = { "slovo1 slovo2 slovo3" };
            Token[] outputTokens = { new Token("slovo1"), new Token("slovo2"), new Token("slovo3"), new Token(TokenType.EoI) };
            //Act
            IDisposableTokenGetter srf = new MultiReaderInput (new StringReaderFactory(testStrings));
            //Assert
            foreach (Token correctToken in outputTokens) {
                Token obtainedToken = srf.GetNextToken();
                Assert.Equal(obtainedToken.Repr(), correctToken.Repr());
            }
        }
        [Fact]
        public void WeirdSpacesOneFile() {
            //Arrange
            string[] testStrings = { "slovo1      slovo2       slovo3" };
            Token[] outputTokens = { new Token("slovo1"), new Token("slovo2"), new Token("slovo3"), new Token(TokenType.EoI) };
            //Act
            IDisposableTokenGetter srf = new MultiReaderInput(new StringReaderFactory(testStrings));
            //Assert
            foreach (Token correctToken in outputTokens) {
                Token obtainedToken = srf.GetNextToken();
                Assert.Equal(obtainedToken.Repr(), correctToken.Repr());
            }
        }
        [Fact]
        public void EndSpacesOneFile() {
            //Arrange
            string[] testStrings = { "slovo1 slovo2 slovo3         " };
            Token[] outputTokens = { new Token("slovo1"), new Token("slovo2"), new Token("slovo3"), new Token(TokenType.EoI) };
            //Act
            IDisposableTokenGetter srf = new MultiReaderInput(new StringReaderFactory(testStrings));
            //Assert
            foreach (Token correctToken in outputTokens) {
                Token obtainedToken = srf.GetNextToken();
                Assert.Equal(obtainedToken.Repr(), correctToken.Repr());
            }
        }
        [Fact]
        public void StandardInputMultiFile() {
            //Arrange
            string[] testStrings = { "slovo1 slovo2 slovo3", "slovo4 slovo5 slovo6" };
            Token[] outputTokens = {    new Token("slovo1"), new Token("slovo2"), new Token("slovo3"),
                                        new Token("slovo4"), new Token("slovo5"), new Token("slovo6"), new Token(TokenType.EoI) };
            //Act
            IDisposableTokenGetter srf = new MultiReaderInput(new StringReaderFactory(testStrings));
            //Assert
            foreach (Token correctToken in outputTokens) {
                Token obtainedToken = srf.GetNextToken();
                Assert.Equal(obtainedToken.Repr(), correctToken.Repr());
            }
        }
        [Fact]
        public void WeirdSpacesMultiFile() {
            //Arrange
            string[] testStrings = { "slovo1     slovo2     slovo3", "slovo4     slovo5   slovo6" };
            Token[] outputTokens = {    new Token("slovo1"), new Token("slovo2"), new Token("slovo3"),
                                        new Token("slovo4"), new Token("slovo5"), new Token("slovo6"), new Token(TokenType.EoI) };
            //Act
            IDisposableTokenGetter srf = new MultiReaderInput(new StringReaderFactory(testStrings));
            //Assert
            foreach (Token correctToken in outputTokens) {
                Token obtainedToken = srf.GetNextToken();
                Assert.Equal(obtainedToken.Repr(), correctToken.Repr());
            }
        }
        [Fact]
        public void FileBorderSpacesMultiFile() {
            //Arrange
            string[] testStrings = { "slovo1 slovo2 slovo3    ", "     slovo4 slovo5 slovo6" };
            Token[] outputTokens = {    new Token("slovo1"), new Token("slovo2"), new Token("slovo3"),
                                        new Token("slovo4"), new Token("slovo5"), new Token("slovo6"), new Token(TokenType.EoI) };
            //Act
            IDisposableTokenGetter srf = new MultiReaderInput(new StringReaderFactory(testStrings));
            //Assert
            foreach (Token correctToken in outputTokens) {
                Token obtainedToken = srf.GetNextToken();
                Assert.Equal(obtainedToken.Repr(), correctToken.Repr());
            }
        }
    }
}