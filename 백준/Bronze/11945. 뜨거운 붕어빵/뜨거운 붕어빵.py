A = input().partition(" ")
N = int(A[0])
M = int(A[2])
for i in range(0,N):
    In = input()
    for j in range(M-1,-1,-1):
        print(In[j],end="")
    print()
