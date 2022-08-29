S = int(input())
count = 0
if S < 10:
    S = '0' + str(S)
else:
    S = str(S)
A = S
while True:
    B = str(int(A[0]) + int(A[1])).rjust(2,"0")
    A = str(A[1]) + str(B[1])
    count += 1
    if A == S:
        break
print(count)
