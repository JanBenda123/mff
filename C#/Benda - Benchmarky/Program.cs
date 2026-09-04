using BenchmarkDotNet.Running;

namespace IncrementWordCountInDictionary {
	internal class Program {

		public static void IncrementWordCount_V1(IDictionary<string, int> wordToCountDictionary, string word) {
			try {
				wordToCountDictionary[word]++;
			} catch (KeyNotFoundException) {
				wordToCountDictionary[word] = 1;
			}
		}

       public static void IncrementWordCount_V2(IDictionary<string, int> wordToCountDictionary, string word) {
			if (wordToCountDictionary.ContainsKey(word)) {
				wordToCountDictionary[word]++;
			} else {
				wordToCountDictionary[word] = 1;
			}
		}

        public static void IncrementWordCount_V3(IDictionary<string, int> wordToCountDictionary, string word) {
			_ = wordToCountDictionary.TryGetValue(word, out int value);		// If not found, value == default(int) == 0
			value++;
			wordToCountDictionary[word] = value;
		}

		static void Main(string[] args) {
            BenchmarkSwitcher.FromAssembly(typeof(Program).Assembly).Run(args);
			Console.ReadKey(); // To allow copying from the console

            //var d = new Dictionary<string, int>();

            //IncrementWordCount_V1(d, "one");
            //IncrementWordCount_V1(d, "one");

            //IncrementWordCount_V2(d, "two");
            //IncrementWordCount_V2(d, "two");

            //IncrementWordCount_V3(d, "three");
            //IncrementWordCount_V3(d, "three");
        }
	}
}