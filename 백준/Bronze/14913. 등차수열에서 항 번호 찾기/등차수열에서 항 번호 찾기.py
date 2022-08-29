a, d, an = list(map(int,input().split(" ")))
bl = 0
cnt = 0
if d > 0 :
    for i in range(a, 1000000, d) :
        cnt += 1
        if i == an :
            print(cnt)
            bl = 1
else :
    for i in range(a, -1000000, d) :
        cnt += 1
        if i == an :
            print(cnt)
            bl = 1
if bl == 0 :
    print("X")
