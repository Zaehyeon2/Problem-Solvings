idx = input()
N = len(idx)
Ans = idx[0]
for i in range(0,N-1):
    if idx[i] == '-':
        Ans += idx[i+1]
print(Ans)
