vstup = int(input())
suma = 0
dynVstup = vstup
while dynVstup > 0 :
    suma += dynVstup % 10
    dynVstup //=10
print(suma)