n = int(input())
sum = 0
while 1:
    if n % 5 == 0:
        n -= 5
        sum += 1
    elif n >= 3:
        n -= 3
        sum += 1
    if n < 3:
        break
if n == 0:
    print(sum)
else :
    print("-1")
