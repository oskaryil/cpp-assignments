import collections

alphabet = {'A': '.-', 'B': '-...',
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

S, P = map(str,input().split())

T, B, M = map(str,input().split())

N, morsecode = map(str, input().split())


nyBokstavDelimiter = ""
for zero in range(int(B)):
  nyBokstavDelimiter += "0"

mellanslagNotation = ""
for i in range(int(M)):
  mellanslagNotation += "0"


words = morsecode.split(mellanslagNotation)
# print("WORDS")

paus = ""
for i in range(int(T)):
  paus += "0"


if(len(paus) > len(mellanslagNotation)):
    print(morsecode.find(mellanslagNotation))
    print(morsecode.rfind(mellanslagNotation))
    

withoutPaus = []
for i in range(len(words)):
  words[i] = words[i].split(nyBokstavDelimiter)
  # withoutPaus.append(words[i].split(paus))
  # withoutPaus.append(i.split(paus))

for i in range(len(words)):
  for j in range(len(words[i])):
    words[i][j] = words[i][j].split(paus)

# print(words)
streckNotation = ""
for i in range(int(S)):
  streckNotation += "1"

punktNotation = ""
for i in range(int(P)):
  punktNotation += "1"

# print(words)
finalWord = ""
sentence = []

for i in range(len(words)):
    for j in words[i]:
        # print(j)
        finalMorse = ""
        for a in j:
            # print(a)
            if a==punktNotation:
                finalMorse += "."
            elif a==streckNotation:
                finalMorse += "-"
            # print(finalMorse)

        for key, value in alphabet.items():
            if value == finalMorse:
                finalWord += key
    sentence.append(finalWord)
    finalWord = ""
 
# print(finalWord)
# print(sentence)

finalSentence = " ".join(sentence)
print(finalSentence)

# print(words)

# for i in range(len(words)):
#     # print(words[i])
#     # print("\n");
#     finalMorse = ""
#     for j in range(len(words[i])):
#         for h in range(len(words[i][j])):
#             # print(words[i][j][h])
#             for a in range(len(words[i][j][h])):

#                 if words[i][j][h][a]==punktNotation:
#                     finalMorse += "."
#                 elif words[i][j][h][a]==streckNotation:
#                     finalMorse += "-"
#                 print(finalMorse)

#             for key, value in alphabet.items():
#                 if value == finalMorse:
#                     finalWord += key

# for i in range(len(words)):
#     # print(words[i])
#     # print("\n");
#     finalMorse = ""
#     for j in range(len(words[i])):
#             # print(words[i][j][h])
#         for a in words[i][j]:
#             print(a)
#             if a==punktNotation:
#                 finalMorse += "."
#             elif a==streckNotation:
#                 finalMorse += "-"
#             print(finalMorse)

#         for key, value in alphabet.items():
#             if value == finalMorse:
#                 finalWord += key

# print(withoutPaus)

# print(nyBokstavDelimiter)


# for i in range(26):
#   line = input()
