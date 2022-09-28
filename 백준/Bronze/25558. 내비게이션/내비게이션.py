num_nav = int(input())
sx, sy, ex, ey = map(int, input().split())

answer = 0
min = 0

for i in range(num_nav):
    k = int(input())
    path = [(sx, sy)]
    for j in range(k):
        x, y = map(int, input().split())
        path.append((x, y))
    path.append((ex, ey))
    len_path = 0
    for j in range(len(path)-1):
        len_path += abs(path[j][0]-path[j+1][0]) + abs(path[j][1]-path[j+1][1])
    if i == 0:
        min = len_path
        answer = 1
    else :
        if min > len_path:
            min = len_path
            answer = i + 1

print(answer)
