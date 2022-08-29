score = [0]*10
sum1 = 0
sum2 = 0
for i in range(10):
    score[i] = int(input())
for i in range(10):
    if sum1 < 100:
        sum1 += score[i]
        max = i
for j in range(max):
    sum2 += score[j]
if abs(sum1-100) > abs(sum2-100):
    print(sum2)
else:
    print(sum1)
