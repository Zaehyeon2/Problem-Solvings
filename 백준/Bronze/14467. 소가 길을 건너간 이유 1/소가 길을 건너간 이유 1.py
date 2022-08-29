Cow = [2]*10
T = int(input())
ans = 0
for i in range(T):
    inp = list(map(int,input().split(" ")))
    if Cow[inp[0]-1] == 2:
        Cow[inp[0]-1] = inp[1]
    else :
        if Cow[inp[0]-1] != inp[1]:
            ans += 1
            Cow[inp[0]-1] = inp[1]
        else :
            Cow[inp[0]-1] = inp[1]
print(ans)
