N, M = list(map(int,input().split(" ")))
A = list(map(int,input().split(" ")))
B = list(map(int,input().split(" ")))
ans = A + B
ans.sort()
for i in range(len(ans)):
    print(ans[i],end=" ")
