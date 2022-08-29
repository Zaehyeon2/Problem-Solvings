N = int(input())
A = input().split(" ")
B = input().split(" ")
sum = 0
for i in range(N):
    A[i] = int(A[i])
    B[i] = int(B[i])
while A != []:
    sum += min(A)*max(B)
    A.remove(min(A))
    B.remove(max(B))
print(sum)
