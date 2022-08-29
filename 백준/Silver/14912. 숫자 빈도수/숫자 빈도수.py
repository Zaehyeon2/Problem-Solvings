n, d = list(map(int,input().split(" ")))
ans = 0
for i in range(1, n + 1) :
    if str(d) in str(i) :
        for j in range(len(str(i))) :
            if str(i)[j] == str(d) :
                ans += 1
print(ans)
