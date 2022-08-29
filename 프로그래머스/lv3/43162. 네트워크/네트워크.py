def solution(n, computers):
    answer = 0
    for i in range(n):
        for j in range(n):
            if computers[i][j] == 1:
                computers[i][j] = 0
                computers = dfs(j, computers)
                answer += 1
    return answer

def dfs(n, computers):
    for i in range(len(computers[n])):
        if computers[n][i] == 1:
            computers[n][i] = 0
            computers = dfs(i, computers)
    return computers