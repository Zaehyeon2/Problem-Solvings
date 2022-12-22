A = input()

num = 1

for i in range(1, len(A)):
    if A[i] != A[0]:
        break
    else:
        num += 1

print(num)