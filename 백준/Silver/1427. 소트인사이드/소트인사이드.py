N = input()
S= []
ans = ''
for i in range(len(N)):
    S += N[i]
S.sort()
for i in range(len(N)-1,-1,-1):
    ans += S[i]
print(ans)
