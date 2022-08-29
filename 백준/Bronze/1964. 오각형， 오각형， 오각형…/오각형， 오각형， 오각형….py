plus = 4
sum = 1
N = int(input())
for i in range(N):
    sum += plus
    plus += 3
print(sum%45678)
