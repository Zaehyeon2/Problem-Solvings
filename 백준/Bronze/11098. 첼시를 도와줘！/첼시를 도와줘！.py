T = int(input())
Max = 0
for i in range(0,T):
    Sn = int(input())
    for j in range(0,Sn):
        M = input().partition(" ")
        if Max < int(M[0]):
            Name = M[2]
            Max = int(M[0])
    print(Name)
    Max = 0
