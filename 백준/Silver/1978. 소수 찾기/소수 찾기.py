N = int(input())
A = input().split(" ")
sum = 0
real_sosu = []
Sosu = [1]* 1000
Sosu[0], Sosu[1] = 0,0
for i in range(2,1000):
    for j in range(i+1,1000):
        if Sosu[i] == 1 and j%i == 0:
            Sosu[j] = 0
for i in range(1000):
    if Sosu[i] == 1:
        real_sosu += [i]
for x in A:
    if int(x) in real_sosu:
        sum += 1

print(sum)
