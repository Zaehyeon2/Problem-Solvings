S = [0] * 10001
for i in range(1,10001):
    S[i] = i*i
sum = 0
Min = 100000000
M = int(input())
N = int(input())
for i in range(0,10001):
    if M <= S[i] and S[i] <= N:
        sum += i*i
        if S[i] < Min:
            Min = S[i]
if sum == 0:
    print("-1")
else:
    print(sum)
    print(Min)
