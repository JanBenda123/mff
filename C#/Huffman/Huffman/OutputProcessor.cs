using HuffmanEncoderNS;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;
using System.Numerics;

namespace OutputProcessor {
    class Convertor {
        public static int BoolListToInt(IEnumerable<bool> boolList) {
            //Little-Endian
            int i = 0;
            int exponent = 1;
            foreach (bool b in boolList) {
                if (b) { i += exponent; }
                exponent = exponent << 1;
            }
            return i;
        }
        public static int BoolListToInt(Queue<bool> boolList, int boolsToProcess) {
            //Little-Endian
            int i = 0;
            int exponent = 1;
            int processedBools = 0;
            foreach (bool b in boolList) {
                if (b) { i += exponent; }
                processedBools++;
                if (processedBools == boolsToProcess) { return i; }
                exponent = exponent << 1;
            }
            return i;
        }
        public static long ReverseBits(long number) {
            long result = 0;
            int size = 64;
            for (int i = 0; i < size; i++) {
                long bit = (number >> i) & 1;
                result = result | (bit << (size - 1 - i));
            }
            return result;
        }
    }
        public interface IByteReader {
            int ReadByte();
        }
        public class ByteReaderWrapper : IByteReader {
            Stream stream;
            public ByteReaderWrapper(Stream toBeRead) {
                stream = toBeRead;
            }
            public int ReadByte() {
                return stream.ReadByte();
            }
        }
        public class EncoderDecorator : IByteReader {
            IByteReader _br;
            Queue<bool> _buffer = new Queue<bool>();
            HuffmanEncoder _huffmanEncoder;

            public EncoderDecorator(IByteReader br, HuffmanEncoder huffmanEncoder) {
                _br = br;
                _huffmanEncoder = huffmanEncoder;
            }
            public int ReadByte() {
                while (_buffer.Count < 8) { //Loads bools 
                    int b = _br.ReadByte();
                    if (b != -1) {
                        bool[] encodedBytes = _huffmanEncoder.Encode(b);
                        foreach (bool bEncoded in encodedBytes) {
                            _buffer.Enqueue(bEncoded);
                        }
                        continue;
                    }
                    //EoI case
                    if (_buffer.Count > 0) {
                        return Convertor.BoolListToInt(_buffer); //Process the rest of the buffer 
                    }
                    else { return -1; }
                }
                return Convertor.BoolListToInt(_buffer, 8); //Processes last 8 bools to int
            }
        }

        public class TextByteGenerator : IByteReader { //use {hu|m}ff
            string _text;
            int _pos = 0;
            public TextByteGenerator(string text) {
                _text = text;
            }

            public TextByteGenerator() {
                _text = "{hu|m}ff";
            }

            public int ReadByte() {
                if (_pos < _text.Length) {
                    return _text[_pos++];
                }
                return -1;
            }
        }
    
        public class ByteQueueReader {
            Queue<int> _queue;
            public ByteQueueReader(Queue<int> queue) {
                _queue = queue;
            }
            public int ReadByte() {
                if (_queue.Count() != 0) { return _queue.Dequeue(); }
                return -1;
            }
        }
    }

