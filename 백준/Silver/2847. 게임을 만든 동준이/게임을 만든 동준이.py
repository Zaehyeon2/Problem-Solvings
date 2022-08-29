N = int(input())
A = [0]*N
sum = 0
for i in range(N):
    A[i] = int(input())
while 1:
    if N-1 == 0:
        break
    if A[N-1] <= A[N-2]:
        if A[N-1] < A[N-2]:
            A[N-2] -= 1
            sum += 1
        else :
            A[N-2] -= 1
            sum += 1
    else :
        N -= 1
print(sum)
