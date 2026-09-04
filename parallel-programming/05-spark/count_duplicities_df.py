from pyspark.sql import SparkSession
from pyspark.sql.functions import col,count,expr,concat_ws
import sys

if len(sys.argv) < 2:
    raise Exception("No arguments passed.")
input_file = sys.argv[1]

spark = SparkSession.builder.getOrCreate()

df = spark.read.csv(input_file, header=False)
df =  df.withColumnRenamed("_c0", "name")\
        .withColumnRenamed("_c1", "surname")\
        .withColumnRenamed("_c2", "phone")\
        .withColumnRenamed("_c3", "postal_code")

# df =  df.drop("phone")\
#         .withColumn("region", col("postal_code").substr(1, 1).cast("int"))\
#         .drop("postal_code")\
#         .withColumn("full_name", concat_ws("", col("name"), col("surname")))\
#         .drop("name", "surname")

df = df.select(
    col("name"), 
    col("surname"), 
    col("postal_code").substr(1, 1).cast("int").alias("region"),
    concat_ws("", col("name"), col("surname")).alias("full_name")
).drop("name", "surname", "postal_code","phone")

df =  df.groupBy("region", "full_name")\
        .agg(count("*").alias("count"))\
        .filter(col("count") > 1)\
        .groupBy("region")\
        .agg(expr("sum(count)").alias("total_duplicates"))\
        .orderBy("region")

output =  df.selectExpr("CAST(region AS STRING)", "CAST(total_duplicates AS STRING)")\
            .rdd.map(lambda row: ",".join(row))\
            .collect()

with open("output.csv", "w") as f:
    for line in output:
        f.write(line + "\n")

spark.stop()

