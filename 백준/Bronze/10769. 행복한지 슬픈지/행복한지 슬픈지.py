S = input()
happy = 0
sad = 0
for i in range(len(S)-2):
    if S[i] == ':' and S[i+1] == '-':
        if S[i+2] == ')':
            happy += 1
        elif S[i+2] == '(':
            sad += 1
if happy == 0 and sad == 0:
    print("none")
elif happy == sad and sad >= 1 and happy >= 1:
    print("unsure")
elif happy > sad :
    print("happy")
elif sad > happy :
    print("sad")
