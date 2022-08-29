S = input()
joi = 0
ioi = 0
for i in range(0,len(S)-2):
    if S[i] == 'J' :
        if S[i+1] == 'O' :
            if S[i+2] == 'I' :
                joi += 1
    if S[i] == 'I' :
        if S[i+1] == 'O' :
            if S[i+2] == 'I' :
                ioi += 1
print(joi)
print(ioi)
