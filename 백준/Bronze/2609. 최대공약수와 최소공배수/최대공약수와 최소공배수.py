def gcd(m,n):
    if n!= 0:
        return gcd(n, m%n)
    else:
        return abs(m)
[m,n] = input().split(" ")
m,n = int(m), int(n)
print(gcd(m,n))
print(int(m*n/gcd(m,n)))
