a = list(map(int,input().split(" ")))
length = len(a)
ans = 0
for i in range(length) :
    if a[i] > 0 :
        ans += 1
print(ans)
