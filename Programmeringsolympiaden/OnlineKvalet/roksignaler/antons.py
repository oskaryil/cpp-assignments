import collections
#Prints the morse code alfabet
alfabet = {'A': '.-', 'B': '-...',
'C': '-.-.', 'D': '-..',
'E': '.', 'F': '..-.',
'G': '--.', 'H': '....',
'I': '..', 'J': '.---',
'K': '-.-', 'L': '.-..',
'M': '--', 'N': '-.',
'O': '---', 'P': '.--.',
'Q': '--.-', 'R': '.-.',
'S': '...', 'T': '-',
'U': '..-', 'V': '...-',
'W': '.--', 'X': '-..-',
'Y': '-.--', 'Z': '--..'}
alfa = collections.OrderedDict(sorted(alfabet.items()))
for k,v in alfa.items():
    print(k, v)

n = "101010100100101110111011100010101010010010111"
b = input("B: ")
t = input("T: ")
s = input("S: ")
p = input("P: ")

nollor = []
for noll in range(int(b)):
    nollor.append('0')

zero = ''.join(nollor)
words = n.split(zero)

#T input
pauser = []
for pa in range(int(t)):
    pauser.append('0')
zelo = ''.join(pauser)

pure = []
for i in words:
    pure.append(i.split(zelo))
strec = []

for e in range(int(s)):
    strec.append('1')
streck = ''.join(strec)
print(streck)
#print(pure)

lst = []

finalWord = ""

for x in pure:
    for u in x:
        if u == streck[0]:
            lst.append('-')
        else:
            lst.append('.')
for d in range(len(pure)):
    print(pure[d])
    print("\n");
    lol = ""
    for a in pure[d]:
        if a=="1":
            lol += "."
        elif a=="111":
            lol += "-"
        print(lol)
    for key, value in alfabet.items():
        if value == lol:
            finalWord += key
print(finalWord)