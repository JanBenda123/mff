def prvocisla(m):
    n=m+1
    primeBoolList = [True]*n
    primeBoolList[0], primeBoolList[1] = False, False
    for i in range(2,n-1):
        if primeBoolList[i] == True:
            k = 2
            while k*i < n:
                primeBoolList[k*i] = False
                k+=1
    return [i for i in range(n) if primeBoolList[i]]

    

    
   