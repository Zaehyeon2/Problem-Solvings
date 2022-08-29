N = int(input())
for _ in range(N):
    T = int(input())
    num = [0]*1001
    maxind = 0
    max = 0
    for _ in range(T):
        num[int(input())] += 1
    for i in range(1001):
        if max < num[i]:
            maxind = i
            max = num[i]
    print(maxind)
