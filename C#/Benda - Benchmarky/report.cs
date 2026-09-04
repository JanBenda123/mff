
=================================| ČÁST A |=================================

Začali jsme druhou částí úkolu, tj. rozhodováním, která metoda přidávání do slovníku je pro naše potřeby nejvhodnější

Použili jsme dva testy:
	-přidávání známého slova do slovníku (první tři řádky)
	-přidávání neznámého slova do slovníku poslední tři řádky)
Oba testy mají stejný setup - Slovník před testem naplníme slovy z 5 pěti odstavců Lorem Ipsum - testování na prázdném slovníku nemá smysl, neboť bude většinu času zaplněný. 

Zde jsou naměřená data:
| Method                             | rawTestedInput       | Mean     | Error   | StdDev  | Median   | Allocated |
|----------------------------------- |--------------------- |---------:|--------:|--------:|---------:|----------:|
| IncrementWordCount_V1BenchmarkTest | Sed c(...)qu ad [59] | 374.0 ns | 1.63 ns | 2.23 ns | 373.7 ns |         - |
| IncrementWordCount_V2BenchmarkTest | Sed c(...)qu ad [59] | 520.2 ns | 1.38 ns | 2.02 ns | 519.9 ns |         - |
| IncrementWordCount_V3BenchmarkTest | Sed c(...)qu ad [59] | 371.7 ns | 5.76 ns | 8.45 ns | 365.5 ns |         - |

| IncrementWordCount_V1BenchmarkTest | slovo(...)lovo9 [70] | 292.6 ns | 0.51 ns | 0.71 ns | 292.5 ns |         - |
| IncrementWordCount_V2BenchmarkTest | slovo(...)lovo9 [70] | 412.6 ns | 1.82 ns | 2.62 ns | 412.9 ns |         - |
| IncrementWordCount_V3BenchmarkTest | slovo(...)lovo9 [70] | 284.1 ns | 0.96 ns | 1.44 ns | 283.6 ns |         - |


V obou případech jsou 1. a 3. způsob rychlejší než 2. Jelikož 1. způsob stojí na try-catch blocku, které má tendenci být pomalý, zvolíme pro další měření 3. způsob.

Za zmínku by stázla překvapivá rychlost 4. testu - přidání neznámého slova v 1. způsobu stojí na selhání try-catch blocku, což by mělo zabrat hodně času. I přesto byl tento způsob stejně rychlý jako 3. metoda.



=================================| ČÁST B |=================================

Ve druhé sadě testů která datová struktura je při použití 3. metody přidávání nejvhodnější pro náš problém. Testujeme stejné scénáře akorát obměňujeme datové struktury

Použité struktury a jejich id
    - 0  -  SortedList<string,int>
    - 1  -  SortedDictionary<string,int>
    - 2  -  Dictionary<string,int> (zatím bez třídění)

| Method                     | dataStructureId | rawTestedInput       | Mean       | Error     | StdDev    | Median     | Allocated |
|--------------------------- |---------------- |--------------------- |-----------:|----------:|----------:|-----------:|----------:|
| DataStructureBenchmarkTest | 0               | Sed c(...)qu ad [59] | 9,390.1 ns |  57.85 ns |  82.97 ns | 9,383.5 ns |         - |
| DataStructureBenchmarkTest | 0               | slovo(...)lovo9 [70] | 9,031.5 ns | 209.07 ns | 299.84 ns | 9,140.4 ns |         - |
| DataStructureBenchmarkTest | 1               | Sed c(...)qu ad [59] | 9,550.0 ns | 108.96 ns | 156.27 ns | 9,573.5 ns |         - |
| DataStructureBenchmarkTest | 1               | slovo(...)lovo9 [70] | 9,662.0 ns |  87.78 ns | 117.18 ns | 9,665.9 ns |         - |
| DataStructureBenchmarkTest | 2               | Sed c(...)qu ad [59] |   362.7 ns |   2.05 ns |   2.87 ns |   360.8 ns |         - |
| DataStructureBenchmarkTest | 2               | slovo(...)lovo9 [70] |   283.6 ns |   1.21 ns |   1.74 ns |   283.3 ns |         - |


Pokud se však rozhodneme po přidání položky v případě Dictionary ještě setřídit klíče (přidáním zakomentovaného if blocku), dostaneme zcela jiné výsledky:

| Method                     | dataStructureId | rawTestedInput       | Mean       | Error     | StdDev    | Gen0   | Allocated |
|--------------------------- |---------------- |--------------------- |-----------:|----------:|----------:|-------:|----------:|
| DataStructureBenchmarkTest | 0               | Sed c(...)qu ad [59] |   9.574 us | 0.1996 us | 0.2732 us |      - |         - |
| DataStructureBenchmarkTest | 0               | slovo(...)lovo9 [70] |   9.211 us | 0.3707 us | 0.4949 us |      - |         - |
| DataStructureBenchmarkTest | 1               | Sed c(...)qu ad [59] |  10.939 us | 1.3719 us | 2.0110 us |      - |         - |
| DataStructureBenchmarkTest | 1               | slovo(...)lovo9 [70] |  11.381 us | 1.8388 us | 2.6371 us |      - |         - |
| DataStructureBenchmarkTest | 2               | Sed c(...)qu ad [59] | 162.941 us | 5.4034 us | 7.7494 us | 1.4648 |    2304 B |
| DataStructureBenchmarkTest | 2               | slovo(...)lovo9 [70] | 168.461 us | 1.6661 us | 2.4938 us | 1.4648 |    2384 B |

Přidání if blocku prodloužilo první 4 testy desetinásobně. I přesto však použití Dictionary a třídění bylo výrazně pomalejší. Lze ho tedy vyřadit.

Zbylé dvě struktury jsou v obou případech podobně rychlé. V tomto případě bychom zvolili SortedDictionary, které jsou sice pomalejší, ale v kontextu úlohy davají větší smysl.


=================================| ZÁVĚR |=================================

Rozhodli jsme se použít metodu IncrementWordCount_V3 a datovou strukturu SortedDictionary<string,int>.





























