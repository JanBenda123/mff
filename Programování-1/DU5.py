i = int(input())
utridenePole = []
while i >= 1:
    utridenePole.append(int(input()))
    i -= 1

i = int(input())
nezatridenePrvky = []

while i >= 1:
    nezatridenePrvky.append(int(input()))
    i -= 1

for x in nezatridenePrvky :
    i = 0
    while True:       
        if i == len(utridenePole):
            utridenePole.append(x)
            break
        elif utridenePole[i] < x:
            i+=1
        else:
            utridenePole.insert(i,x)
            break

for x in utridenePole:
    print(x)
