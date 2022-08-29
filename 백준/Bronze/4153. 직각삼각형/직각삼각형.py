while 1:
    a,b,c = input().split(" ")
    a,b,c = int(a), int(b), int(c)
    if a == 0 and b == 0 and c == 0:
        break
    else:
        S = [a,b,c]
        S.sort()
        if a+b <= c:
            print("wrong")
        else:
            if S[2]**2 == S[1]**2 + S[0]**2:
                print("right")
            else:
                print("wrong")
