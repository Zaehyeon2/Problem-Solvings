N = int(input())

rmap = []
nowgen = (0, 0)

for i in range(N):
    tmp = list(map(int, input().split()))
    rmap.append(tmp)

for i in range(N):
    for j in range(N):
        if rmap[i][j] == 2:
            nowgen = (i, j)

def solution():
    for i in range(N):
        for j in range(N):
            if rmap[i][j] == 1:
                if (abs(nowgen[0]-i) + abs(nowgen[1]-j))%2 == 0:
                    return "Kiriya"
    else: return "Lena"

print(solution())
