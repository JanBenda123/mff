from pyspark import SparkContext, SparkConf
import sys

if len(sys.argv) < 2:
    raise Exception("No arguments passed.")
input_file = sys.argv[1]


sc = SparkContext()

citizens = sc.textFile(input_file)

# na vstupu: jmeno,prijmeni,randomvec,psc
# ((region_number,"jmenoprijmeni"),pocet_duplicit)
sorted_duplicity_count = citizens.map(lambda entry: ((int(entry.split(',')[-1]) // 10000, entry.split(',')[0]+ entry.split(',')[1]),1))\
                                .reduceByKey(lambda x,y: x+y)\
                                .filter(lambda entry: entry[1] > 1)\
                                .map(lambda entry: (entry[0][0],entry[1]))\
                                .reduceByKey(lambda x,y: x+y)\
                                .sortByKey(ascending=True)

output = sorted_duplicity_count.map(lambda x: f"{x[0]},{x[1]}").collect()

with open("output.csv", "w") as f:
    for line in output:
        f.write(line + "\n")







