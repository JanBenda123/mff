vstup = open("vstup.txt", mode='r', encoding="utf-8")
vystup = open("vystup.txt", mode='w', encoding="utf-8")
palindromy = [word for word in vstup.read().split() if word.lower()
              == word[::-1].lower()]
print(palindromy)
for p in palindromy:
    vystup.write(p + "\n")
vstup.close()
vystup.close()
