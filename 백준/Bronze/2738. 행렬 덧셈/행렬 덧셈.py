N, M = list(map(int,input().split(" ")))
A = [] * 101
B = [] * 101
for i in range(N):
    A += [list(map(int,input().split(" ")))]
for i in range(N):
    B += [list(map(int,input().split(" ")))]
for i in range(N):
    for j in range(M):
        print(A[i][j] + B[i][j],end=" ")
    print()
