a = list(map(int,input().split(" ")))
length = len(a)
ans = 0
for i in range(1, length) :
    if a[i] < a[i-1] :
        print("Bad")
        ans = 1
        break
if ans != 1 :
    print("Good")
