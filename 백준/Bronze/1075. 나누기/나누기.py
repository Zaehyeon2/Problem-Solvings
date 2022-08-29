N = input()
F = int(input())
S = int(N[:len(N)-2] +'00')
for i in range(100):
    if S % F == 0:
        break
    else :
        S += 1
S = str(S)
print(S[len(S)-2:])
