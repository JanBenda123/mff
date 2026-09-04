using Huffman;
using OutputProcessor;
using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Text;
using System.IO;
using System.Threading.Tasks;
using System.CodeDom.Compiler;
using System.ComponentModel;
using System.Net;
using System.Collections;
using OutputProcessor;

/*
 - wrap it aup in a StreamWriter 
 */

namespace HuffmanEncoderNS {
    internal class ByteFrequencyCounter {
        long[] byteFrequency = new long[256];
        Stream byteSrc;
        public ByteFrequencyCounter(Stream byteSrc){
            this.byteSrc = byteSrc;
        }

        public long[] CountFrequncy() {
            int b;
            while ((b = byteSrc.ReadByte()) != -1) {
                byteFrequency[b]++;
            }
            byteSrc.Close();
            return byteFrequency;
        }
    }
    public class HTreeNode : IComparable<HTreeNode> {
        public int Value { get; }
        public long Count { get; }

        public bool IsLeftChild { get; set; }
        public bool IsRigtChild { 
            get {
                return !IsLeftChild;
            } 
            set {
                IsLeftChild = value;
            } 
        }

        bool _isLeaf;
        int _id;
        public HTreeNode? Parent { get; set; } = null;
        public HTreeNode? Left { get; }
        public HTreeNode? Right { get; }
        public HTreeNode(int val, long count) {
            this.Value = val;
            this.Count = count;
            _isLeaf = true;
            Right = null;
            Left = null;
        }
        public HTreeNode(HTreeNode left, HTreeNode right, int id) {
            _id = id;
            Count = left.Count + right.Count;
            _isLeaf = false;
            this.Right = right;
            this.Left = left;
        }
        public int CompareTo(HTreeNode other) {
            if (other == null) return 1;

            if (this.Count != other.Count) {
                return this.Count.CompareTo(other.Count);
            }

            if (this._isLeaf ^ other._isLeaf) {
                if (this._isLeaf) { return -1; }
                return 1;
            }

            if (this._isLeaf && other._isLeaf) {
                if (this.Value > other.Value) {
                    return 1;
                }
                return -1;
            }

            if (!this._isLeaf && !other._isLeaf) {
                return this._id.CompareTo(other._id);
            }

            throw new ArgumentException("HTreeNode comparison failed.");
            return 1;
        }

        public static bool operator <(HTreeNode a, HTreeNode b) {
            return a.CompareTo(b) < 0;
        }
        public static bool operator >(HTreeNode a, HTreeNode b) {
            return a.CompareTo(b) > 0;
        }

        public override string ToString() {
            if (_isLeaf) {
                return $"*{Value}:{Count}";
            }
            return $"{Count} {Left.ToString()} {Right.ToString()}";
        }
        long NodeByteRepr() {
            //
            // POSSIBLE ENDIANITY PROBLEM - CHECK BEFOR SUBMIT
            //
            long treeBytes = 0;
            if (_isLeaf) { treeBytes += (1 << 63); }    // 1<<63 is MsB in Little-Endian
            long bits = (Count << 9) >> 8;
            treeBytes += Convertor.ReverseBits(bits);           // << 9 discards 9 MsB, >>8 shifts back, leaving LsB 0, Reverse bits reverses bits, putting 0 to MsB
            if (_isLeaf) { treeBytes += Value; }        // 8 LsB are for stored value
            return treeBytes;
        }

        public Queue<long> ByteRepr() {     
            Queue<long> result = new Queue<long>();
            result.Enqueue(NodeByteRepr());
            if (!_isLeaf) {
                Left.ByteRepr(result);
                Right.ByteRepr(result);
            }

            result.Enqueue(0);//Ending sequence

            return result;
        }
        void ByteRepr(Queue<long> queue) {
            queue.Enqueue(NodeByteRepr());
            if (!_isLeaf) {
                Left.ByteRepr(queue);
                Right.ByteRepr(queue);
            }
        }
    }
    public class HTree { 
        public HTreeNode root;
        public HTreeNode[] leaves;
        public HTree(HTreeNode root, HTreeNode[] leaves) {
            this.root = root;
            this.leaves = leaves;
        }
        public string ToString() {
            return root.ToString();
        }
    }
    internal class HuffmanTreeBuilder {
        ICollection<HTreeNode> forest = new List<HTreeNode>();
        public HuffmanTreeBuilder(long[] byteFrequencies) {
            for (int i = 0; i < byteFrequencies.Length; i++) {
                if (byteFrequencies[i] == 0) { continue; }
                forest.Add(new HTreeNode(i, byteFrequencies[i]));
            }     
        }
        HTreeNode ExtractMin() {
            if (forest.Count == 0) {
                Program.ThrowError("");
                throw new Exception("Taking min of empty set"); 
            }
            HTreeNode min = forest.Min();
            forest.Remove(min);
            return min;

        }
        public HTree Build() {
            int id = 0;
            
            while (forest.Count != 1) {
                HTreeNode left = ExtractMin();
                HTreeNode right = ExtractMin();
                HTreeNode newNode = new HTreeNode(left, right, id);

                left.IsLeftChild = true;
                right.IsRigtChild = true;
                left.Parent = newNode;
                right.Parent = newNode;

                forest.Add(newNode);
                id++;
            }
            HTreeNode[] leaves = new HTreeNode[256];
            foreach (HTreeNode leaf in forest.ToArray<HTreeNode>()) {
                leaves[leaf.Value] = leaf;    
            }

            return new HTree(forest.Min(), leaves); //At this point forest contains only one element
        }
    }
    public class HuffmanEncoder{
        public HTree tree;
        Stream _inputStream;
        bool[][] _encodingTable = new bool[256][];  //We need fast access = jagged arrays
                                                   


        public HuffmanEncoder(Stream inputStream){
            _inputStream = inputStream;
            ByteFrequencyCounter counter = new ByteFrequencyCounter(inputStream);
            long[] frequencies = counter.CountFrequncy();
            HuffmanTreeBuilder treeBuilder = new HuffmanTreeBuilder(frequencies);
            tree = treeBuilder.Build();
            GenerateEncodingTable();
        }

        public bool[] Encode(int b) {
            if ((0 <= b) && (b <= 255)) {
                try { return _encodingTable[b]; } 
                catch { throw new Exception("Unknown byte encountered"); }
            }
            throw new Exception("Out of byte range");
        }

        void GenerateEncodingTable() {
            for (int iByte = 0; iByte < 256; iByte++) { //is o(leaves^2) DFS would be just O(leaves)
                HTreeNode node = tree.leaves[iByte];
                List<bool> path = new List<bool>();
                if (node == null) { continue; }
                int j = 0;
                while (node.Parent != null) {
                    path.Add(node.IsRigtChild);
                    node = node.Parent;
                    j++;
                }
                _encodingTable[iByte] = path.ToArray();
                Array.Reverse(_encodingTable[iByte]);   //path wa generated leaves -> root, we want the opposite
            }
        }
    } 
}
