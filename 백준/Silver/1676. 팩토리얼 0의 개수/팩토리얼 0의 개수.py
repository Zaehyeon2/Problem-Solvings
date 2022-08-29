import math as m

N = int(input())
N1 = str(m.factorial(N))
sum = 0
for i in range(len(N1)-1,-1,-1):
    if N1[i] == '0':
        sum += 1
    else :
        break
print(sum)
