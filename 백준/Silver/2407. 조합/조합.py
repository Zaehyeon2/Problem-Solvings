[m,n] = input().split(" ")
m,n = int(m), int(n)
def comb_pascal(n, r):
    matrix = [[]] * (n - r + 1)
    matrix[0] = [1] * (r + 1)
    for i in range(1, n - r + 1):
        matrix[i] = [1]
    for i in range(1, n - r + 1):
        for j in range(1, r + 1):
            newvalue = matrix[i][j - 1] + matrix[i - 1][j]
            matrix[i].append(newvalue)
    return matrix[n - r][r]

print(comb_pascal(m,n))
