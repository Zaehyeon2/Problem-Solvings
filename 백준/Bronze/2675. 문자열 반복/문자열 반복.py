T = int(input())
for i in range(0,T):
    S = input().partition(" ")
    R = int(S[0])
    M = S[2]
    leng = len(M)
    for j in range(0,leng):
        print(R*M[j],end="")
    print()
