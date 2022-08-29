def gcd(m,n):
    if n!= 0:
        return gcd(n, m%n)
    else:
        return abs(m)

T = int(input())
for i in range(T):
    a,b = list(map(int,input().split(" ")))
    print(int(a*b/gcd(a,b)),gcd(a,b))
