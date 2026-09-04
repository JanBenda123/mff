using System.Collections.Generic;
using System.Reflection;
using BenchmarkDotNet;
using BenchmarkDotNet.Attributes;
using BenchmarkDotNet.Running;

using IncrementWordCountInDictionary;

[MediumRunJob]
[MemoryDiagnoser]
public class IncrementWordCountBenchmark {
    [Params("slovo0, slovo1 slovo2 slovo3 slovo4 slovo5 slovo6 slovo7 slovo8 slovo9", "Sed convallis magna eu sem. Class aptent taciti sociosqu ad")]
    public string? rawTestedInput;

    string[]? _testedInput;
    string? _rawSetupInput = "Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Praesent id justo in neque elementum ultrices. Sed convallis magna eu sem. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos hymenaeos. Aliquam erat volutpat. Nam quis nulla. Mauris metus. Integer pellentesque quam vel velit. Aliquam ornare wisi eu metus. In rutrum. Fusce suscipit libero eget elit. Etiam ligula pede, sagittis quis, interdum ultricies, scelerisque eu. Fusce dui leo, imperdiet in, aliquam sit amet, feugiat eu, orci. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos hymenaeos. Nullam faucibus mi quis velit. Vestibulum erat nulla, ullamcorper nec, rutrum non, nonummy ac, erat. Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas nulla pariatur? Duis bibendum, lectus ut viverra rhoncus, dolor nunc faucibus libero, eget facilisis enim ipsum id lacus. Integer rutrum, orci vestibulum ullamcorper ultricies, lacus quam ultricies odio, vitae placerat pede sem sit amet enim. Praesent dapibus. Duis risus. Etiam sapien elit, consequat eget, tristique non, venenatis quis, ante. Mauris tincidunt sem sed arcu. Integer in sapien. Aliquam in lorem sit amet leo accumsan lacinia. Donec iaculis gravida nulla. Fusce nibh. Etiam egestas wisi a erat. Nullam feugiat, turpis at pulvinar vulputate, erat libero tristique tellus, nec bibendum odio risus sit amet ante. Nullam lectus justo, vulputate eget mollis sed, tempor sed magna. Praesent id justo in neque elementum ultrices. Nulla accumsan, elit sit amet varius semper, nulla mauris mollis quam, tempor suscipit diam nulla vel leo. Pellentesque ipsum. Mauris tincidunt sem sed arcu. Nunc dapibus tortor vel mi dapibus sollicitudin. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos hymenaeos. Phasellus rhoncus. Duis ante orci, molestie vitae vehicula venenatis, tincidunt ac pede. Etiam dui sem, fermentum vitae, sagittis id, malesuada in, quam. Nunc dapibus tortor vel mi dapibus sollicitudin. Mauris suscipit, ligula sit amet pharetra semper, nibh ante cursus purus, vel sagittis velit mauris vel metus. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos hymenaeos. Etiam dictum tincidunt diam. Nunc dapibus tortor vel mi dapibus sollicitudin. Cras elementum. Nullam at arcu a est sollicitudin euismod. Fusce aliquam vestibulum ipsum. Nunc auctor. Nam sed tellus id magna elementum tincidunt. Donec quis nibh at felis congue commodo. Nulla non lectus sed nisl molestie malesuada. Nullam feugiat, turpis at pulvinar vulputate, erat libero tristique tellus, nec bibendum odio risus sit amet ante. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Nam quis nulla. Morbi leo mi, nonummy eget tristique non, rhoncus non leo. Aliquam erat volutpat. Duis condimentum augue id magna semper rutrum. Aliquam erat volutpat. Fusce dui leo, imperdiet in, aliquam sit amet, feugiat eu, orci. Integer tempor. Phasellus rhoncus. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Nullam justo enim, consectetuer nec, ullamcorper ac, vestibulum in, elit. Maecenas libero. Integer lacinia. Morbi imperdiet, mauris ac auctor dictum, nisl ligula egestas nulla, et sollicitudin sem purus in lacus. Nullam at arcu a est sollicitudin euismod. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Integer imperdiet lectus quis justo. Nunc dapibus tortor vel mi dapibus sollicitudin. Pellentesque pretium lectus id turpis. Mauris dictum facilisis augue.";
    int? _testedInputLen;
    public Dictionary<string, int> d;


    [GlobalSetup]
    public void GlobalSetup() {
        string[]?  _benchmarkSetupInput = _rawSetupInput!.Split(' ');
        int?  _setupInputLen = _benchmarkSetupInput.Length;
        d = new Dictionary<string, int>();
        int i = 0;
        while (_setupInputLen > i) {
            Program.IncrementWordCount_V3(d, _benchmarkSetupInput[i]);
            i++;
        }
        _testedInput = rawTestedInput!.Split(' ');
        _testedInputLen = _testedInput.Length;
    }

    [Benchmark]
    public void IncrementWordCount_V1BenchmarkTest() {
        int i = 0;
        while (_testedInputLen > i) {
            Program.IncrementWordCount_V1(d, _testedInput[i]);
            i++;
        }
        
    }
    [Benchmark]
    public void IncrementWordCount_V2BenchmarkTest() {
        int i = 0;
        while (_testedInputLen > i) {
            Program.IncrementWordCount_V2(d, _testedInput[i]);
            i++;
        }
    }
    [Benchmark]
    public void IncrementWordCount_V3BenchmarkTest() {
        int i = 0;
        while (_testedInputLen > i) {
            Program.IncrementWordCount_V3(d, _testedInput[i]);
            i++;
        }
    }
}

[MediumRunJob]
[MemoryDiagnoser]
public class DataStructureBenchmark {
    [Params(0, 1, 2)]
    public int dataStructureId;
    IDictionary<string, int>[] _testedDataStructures = { new SortedList<string, int>(), new SortedDictionary<string, int>(), new Dictionary<string, int>() };
    [Params("slovo0, slovo1 slovo2 slovo3 slovo4 slovo5 slovo6 slovo7 slovo8 slovo9", "Sed convallis magna eu sem. Class aptent taciti sociosqu ad")]
    public string? rawTestedInput;
    public string[] sortedKeyPairs;

    string[]? _testedInput;
    string? _rawSetupInput = "Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Praesent id justo in neque elementum ultrices. Sed convallis magna eu sem. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos hymenaeos. Aliquam erat volutpat. Nam quis nulla. Mauris metus. Integer pellentesque quam vel velit. Aliquam ornare wisi eu metus. In rutrum. Fusce suscipit libero eget elit. Etiam ligula pede, sagittis quis, interdum ultricies, scelerisque eu. Fusce dui leo, imperdiet in, aliquam sit amet, feugiat eu, orci. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos hymenaeos. Nullam faucibus mi quis velit. Vestibulum erat nulla, ullamcorper nec, rutrum non, nonummy ac, erat. Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas nulla pariatur? Duis bibendum, lectus ut viverra rhoncus, dolor nunc faucibus libero, eget facilisis enim ipsum id lacus. Integer rutrum, orci vestibulum ullamcorper ultricies, lacus quam ultricies odio, vitae placerat pede sem sit amet enim. Praesent dapibus. Duis risus. Etiam sapien elit, consequat eget, tristique non, venenatis quis, ante. Mauris tincidunt sem sed arcu. Integer in sapien. Aliquam in lorem sit amet leo accumsan lacinia. Donec iaculis gravida nulla. Fusce nibh. Etiam egestas wisi a erat. Nullam feugiat, turpis at pulvinar vulputate, erat libero tristique tellus, nec bibendum odio risus sit amet ante. Nullam lectus justo, vulputate eget mollis sed, tempor sed magna. Praesent id justo in neque elementum ultrices. Nulla accumsan, elit sit amet varius semper, nulla mauris mollis quam, tempor suscipit diam nulla vel leo. Pellentesque ipsum. Mauris tincidunt sem sed arcu. Nunc dapibus tortor vel mi dapibus sollicitudin. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos hymenaeos. Phasellus rhoncus. Duis ante orci, molestie vitae vehicula venenatis, tincidunt ac pede. Etiam dui sem, fermentum vitae, sagittis id, malesuada in, quam. Nunc dapibus tortor vel mi dapibus sollicitudin. Mauris suscipit, ligula sit amet pharetra semper, nibh ante cursus purus, vel sagittis velit mauris vel metus. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos hymenaeos. Etiam dictum tincidunt diam. Nunc dapibus tortor vel mi dapibus sollicitudin. Cras elementum. Nullam at arcu a est sollicitudin euismod. Fusce aliquam vestibulum ipsum. Nunc auctor. Nam sed tellus id magna elementum tincidunt. Donec quis nibh at felis congue commodo. Nulla non lectus sed nisl molestie malesuada. Nullam feugiat, turpis at pulvinar vulputate, erat libero tristique tellus, nec bibendum odio risus sit amet ante. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Nam quis nulla. Morbi leo mi, nonummy eget tristique non, rhoncus non leo. Aliquam erat volutpat. Duis condimentum augue id magna semper rutrum. Aliquam erat volutpat. Fusce dui leo, imperdiet in, aliquam sit amet, feugiat eu, orci. Integer tempor. Phasellus rhoncus. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Nullam justo enim, consectetuer nec, ullamcorper ac, vestibulum in, elit. Maecenas libero. Integer lacinia. Morbi imperdiet, mauris ac auctor dictum, nisl ligula egestas nulla, et sollicitudin sem purus in lacus. Nullam at arcu a est sollicitudin euismod. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Integer imperdiet lectus quis justo. Nunc dapibus tortor vel mi dapibus sollicitudin. Pellentesque pretium lectus id turpis. Mauris dictum facilisis augue.";
    int? _testedInputLen;
    IDictionary<string, int>? _currentlyTestedDataStructure;

    [GlobalSetup]
    public void GlobalSetup() {
        string[]? _benchmarkSetupInput = _rawSetupInput!.Split(' ');
        int? _setupInputLen = _benchmarkSetupInput.Length;
        _currentlyTestedDataStructure = _testedDataStructures[dataStructureId];

        int i = 0;
        while (_setupInputLen > i) {
            Program.IncrementWordCount_V3(_testedDataStructures[dataStructureId], _benchmarkSetupInput[i]);
            i++;
        }
        _testedInput = rawTestedInput!.Split(' ');
        _testedInputLen = _testedInput.Length;
    }

    [Benchmark]
    public void DataStructureBenchmarkTest() {
        int i = 0;
        while (_testedInputLen > i) {
            Program.IncrementWordCount_V3(_currentlyTestedDataStructure!, _testedInput![i]);
            i++;
        }

        //Dictionary by itself is way faster, but does not sort its entries 
        if (dataStructureId == 2) {
            sortedKeyPairs = _currentlyTestedDataStructure!.Keys.ToArray();
            Array.Sort(sortedKeyPairs); //Sorting all the keys is enough, since then we can just print the output 
        }
    }
}