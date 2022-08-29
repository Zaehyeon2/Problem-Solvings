N = int(input())
S = input().split(" ")
score = 0
sum = 0

for i in range(N):
    if S[i] == '1':
        score += 1
        sum += score
    else :
        score = 0
print(sum)
