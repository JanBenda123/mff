from math import gcd

vstup = []

while len(vstup) !=4:
    vstup.append(int(input()))
citatel = vstup[0]*vstup[3]+vstup[2]*vstup[1]
jmenovatel = vstup[3]*vstup[1]
GCD = gcd(citatel, jmenovatel)

citatel //= GCD
jmenovatel //= GCD

print(citatel)
print(jmenovatel)
