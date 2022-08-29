N = int(input())
for _ in range(N):
    S = input().split(" ")
    sum = 0
    for x in S:
        if x != '' :
            sum += int(x)
    print(sum)
