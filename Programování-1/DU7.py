string = str(input())
rowLen = int(input())


wordField = string.split(" ")
rowField = [] 
rowField.append(" "*(rowLen+1))

rowIndex = 0
for word in wordField:
    if len(rowField[rowIndex])+len(word)+1 <= rowLen:
        rowField[rowIndex] += " " + word
    else:
        rowIndex += 1
        rowField.append("")
        rowField[rowIndex] += word
rowField.pop(0)

for row in rowField:
    print(row)

