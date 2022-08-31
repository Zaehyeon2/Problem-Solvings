from collections import deque


def solution(n, edge):
    answer = 0
    distance = [0 for _ in range(n)]
    graph = [[] for _ in range(n)]
    for x in edge:
        graph[x[0]-1].append(x[1]-1)
        graph[x[1]-1].append(x[0]-1)
    distance[0] = -1
    bfs(distance, graph)
    max_distance = max(distance)
    print(max_distance)
    print(distance)
    for x in distance:
        if x == max_distance:
            answer += 1
    return answer

def bfs(distance, graph):
    q = deque([[0, 0]])
    dis = 0
    while(len(q) != 0):
        tmp = q.popleft()
        for x in graph[tmp[0]]:
            if distance[x] != 0:
                continue
            distance[x] = tmp[1] + 1
            q.append([x, distance[x]])
        
    