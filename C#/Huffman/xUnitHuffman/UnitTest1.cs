using HuffmanEncoderNS;
using System.IO;

namespace xUnitHuffman {
    public class HTreeNodeComparisonTests {
        [Fact]
        public void DifferentCounts() {
            //Arrange
            HTreeNode a = new HTreeNode(4,6);
            HTreeNode b = new HTreeNode(12, 8);
            //Act

            //Assert
            Assert.True(a < b);
            Assert.False(a > b);
        }
        [Fact]
        public void LeafVsInnerNode() {
            //Arrange
            HTreeNode a = new HTreeNode(12, 6);
            HTreeNode b = new HTreeNode(12, 8);
            HTreeNode c = new HTreeNode(12, 2);
            HTreeNode d = new HTreeNode(a, c, 0);
            //Act

            //Assert
            Assert.True(b < d);
            Assert.False(b > d);
        }
        [Fact]
        public void LeavesSameCount() {
            //Arrange
            HTreeNode a = new HTreeNode(10, 8);
            HTreeNode b = new HTreeNode(12, 8);
            //Act

            //Assert
            Assert.True(a < b);
            Assert.False(a > b);
        }

        [Fact]
        public void InnerNodesSameCount() {
            //Arrange
            HTreeNode a = new HTreeNode(10, 8);
            HTreeNode b = new HTreeNode(12, 8);
            HTreeNode c = new HTreeNode(a, b,0);
            HTreeNode d = new HTreeNode(a, b, 1);


            //Act

            //Assert
            Assert.True(c < d);
            Assert.False(c > d);
        }
    }

}

namespace xUnitOutput {

    class Extractor {
        public static int[] ExtractHeader(Stream stream) {
            int length = 8;
            int[] header = new int[length];
            for (int i = 0; i < length; i++) {
                header[i] = stream.ReadByte();
            }
            return header;
        }
        public static long[] ExtractTree(Stream stream, bool shouldSkip) {
            if (shouldSkip) { ExtractHeader(stream); }

            List<long> tree = new List<long>();
            while (true) {
                long nodeRepr = 0;
                for (int i = 0; i < 8; i++) {
                    nodeRepr <<= 8;
                    nodeRepr += stream.ReadByte();
                }
                tree.Add(nodeRepr);
                if (nodeRepr == 0) { break; }
            }
            
            return tree.ToArray();
        }

        public static int[] ExtractEncoded(Stream stream, bool shouldSkip) {
            if (shouldSkip) { ExtractTree(stream, true); }
            List<int> encoded = new List<int>();
            int readByte;
            while ((readByte = stream.ReadByte()) != -1) {
                encoded.Add(readByte);
            }
            return encoded.ToArray();
        }
        public static int[] ByteReaderToArray(IByteReader br) {
            List<int> bytes = new List<int>(); 
            int lastByte = 1;    //nonzero initialization value
            while ((lastByte = br.ReadByte()) != -1) {

                bytes.Add(lastByte);
            }
            return bytes.ToArray();

        }
        static long ByteConcat(long b1, long b2) {
            long concatedBytes = b1 << 8 | b2;
            return concatedBytes;
        }
    }
    public class HeaderTests {
        [Fact]
        public void TestHeader1() {
            //Arrange
            string filename = "binary.in.huff";
            Stream stream = new FileStream(filename, FileMode.Open);

            //Act
            int[] headerParagon = Extractor.ExtractHeader(stream);
            stream.Close();
            int[] headerCreated = Extractor.ByteReaderToArray(new TextByteGenerator());

            //Assert
            Assert.Equal(headerParagon, headerCreated);
        }

        [Fact]
        public void TestHeader2() {
            //Arrange
            string filename = "simple.in.huff";
            Stream stream = new FileStream(filename, FileMode.Open);

            //Act
            int[] headerParagon = Extractor.ExtractHeader(stream);
            stream.Close();
            int[] headerCreated = Extractor.ByteReaderToArray(new TextByteGenerator());

            //Assert
            Assert.Equal(headerParagon, headerCreated);
        }
        [Fact]
        public void TestHeader3() {
            //Arrange
            string filename = "simple2.in.huff";
            Stream stream = new FileStream(filename, FileMode.Open);

            //Act
            int[] headerParagon = Extractor.ExtractHeader(stream);
            stream.Close();
            int[] headerCreated = Extractor.ByteReaderToArray(new TextByteGenerator());

            //Assert
            Assert.Equal(headerParagon, headerCreated);
        }
        [Fact]
        public void TestHeader4() {
            //Arrange
            string filename = "simple3.in.huff";
            Stream stream = new FileStream(filename, FileMode.Open);

            //Act
            int[] headerParagon = Extractor.ExtractHeader(stream);
            stream.Close();
            int[] headerCreated = Extractor.ByteReaderToArray(new TextByteGenerator());

            //Assert
            Assert.Equal(headerParagon, headerCreated);
        }

        [Fact]
        public void TestHeader5() {
            //Arrange
            string filename = "simple4.in.huff";
            Stream stream = new FileStream(filename, FileMode.Open);

            //Act
            int[] headerParagon = Extractor.ExtractHeader(stream);
            stream.Close();
            int[] headerCreated = Extractor.ByteReaderToArray(new TextByteGenerator());

            //Assert
            Assert.Equal(headerParagon, headerCreated);
        }
    }
    public class TreeTests {
        [Fact]
        public void TestTree1() {
            //Arrange
            string filename = "simple.in";

            Stream stream = new FileStream(filename, FileMode.Open);
            HTreeNode root = new HuffmanEncoder(stream).tree.root;
            stream.Close();

            Stream streamParagon = new FileStream(filename + ".huff", FileMode.Open);
            long[] treeArrayParagon = Extractor.ExtractTree(streamParagon, true);
            streamParagon.Close();

            //Act
            long[] treeArrayCreated = root.ByteRepr().ToArray(); 

            //Assert
            Assert.Equal(treeArrayParagon, treeArrayCreated);
        }
    }

    public class EncoderTests {
        [Fact]
        public void TestEncoder1() {
            //Arrange
            string filename = "simple.in";

            Stream stream = new FileStream(filename, FileMode.Open);
            HTreeNode root = new HuffmanEncoder(stream).tree.root;
            stream.Close();

            Stream streamParagon = new FileStream(filename + ".huff", FileMode.Open);
            long[] treeArrayParagon = Extractor.ExtractTree(streamParagon, true);
            streamParagon.Close();

            //Act
            long[] treeArrayCreated = root.ByteRepr().ToArray();

            //Assert
            Assert.Equal(treeArrayParagon, treeArrayCreated);
        }
    }
}