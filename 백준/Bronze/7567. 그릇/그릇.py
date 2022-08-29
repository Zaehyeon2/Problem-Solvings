S = input()
sum = 10
for i in range(len(S)-1):
    if S[i] == S[i+1]:
        sum += 5
    else :
        sum += 10
print(sum)
