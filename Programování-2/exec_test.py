import time
import random
import math


#expressionString, name = "x*x", "test"

#expressionString = "def "+name+"(x):\n\t return "+expressionString
# exec(expressionString)
# "def "+name + "(x):\n\t return "+expressionString+"\n y= "+"name"

def generateFunction(expressionString, name):
    y = None
    expressionString = "def "+name + \
        "(x):\n\t return "+expressionString+"\ny = "+name
    ldic = locals()
    exec(expressionString, globals(), ldic)
    y = ldic["y"]
    return y


generatedFunc = generateFunction("math.sin(x)", "test")


def pureFunc(x):
    return math.sin(x)


samplesize = 100000
sampleRange = 100
experimentRuns = 100
j = 0
counter = 0
while j < experimentRuns:
    y = 0
    x = []
    for _ in range(samplesize):
        x.append(random.random()*sampleRange*2-sampleRange)

    start = time.time()
    for i in x:
        y = pureFunc(i)
    t1 = (time.time()-start)

    start = time.time()
    for i in x:
        y = generatedFunc(i)
    t2 = (time.time()-start)

    if t1 > t2:
        counter += 1
    j += 1
print("generated was faster: ", counter /
      experimentRuns*100, " percent of times")
