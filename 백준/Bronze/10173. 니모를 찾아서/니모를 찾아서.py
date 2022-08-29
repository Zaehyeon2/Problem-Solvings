while True :
    S = input()
    sol = 0
    if S == 'EOI':
        break
    for i in range(0,len(S)-3):
        if S[i] == 'n' or S[i] == 'N' :
            if S[i+1] == 'e' or S[i+1] == 'E':
                if S[i+2] == 'm' or S[i+2] == 'M':
                    if S[i+3] == 'o' or S[i+3] == 'O':
                        sol = 1
    if sol == 0:
        print("Missing")
    else :
        print("Found")
