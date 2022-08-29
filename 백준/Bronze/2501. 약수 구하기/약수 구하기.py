S = input().split(" ")
A = int(S[0])
B = int(S[1])
ans = [] * A
for i in range(1,A+1):
    if A%i == 0:
        ans += [i]
if len(ans) < B:
    print('0')
else:
    print(ans[B-1])
