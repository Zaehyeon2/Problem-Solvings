def gcd(m,n):
    if n!= 0:
        return gcd(n, m%n)
    else:
        return abs(m)

N = int(input())
for i in range(N):
    [m,n] = input().split(" ")
    m,n = int(m), int(n)
    print(int(m*n/gcd(m,n)))
