T = int(input())
for _ in range(0,T):
    sum = 0
    S = input().partition(" ")
    A = int(S[0])
    B = int(S[2])
    for i in range(A,B+1):
        i = str(i)
        leng = int(len(i))
        if leng == 1:
            if i == '0':
                sum += 1
        else :
            for j in range(0,leng):
                if i[j] == '0':
                    sum += 1
    print(sum)
