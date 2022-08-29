[a,b,c] = input().split(" ")
All = int(a)+int(b)
c = int(c)
sum = 0
while All >= c:
    sum += All//c
    All = All % c + All // c
print(sum)
