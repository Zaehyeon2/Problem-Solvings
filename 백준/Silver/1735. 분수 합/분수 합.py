def gcd(m,n):
    if n!= 0:
        return gcd(n, m%n)
    else:
        return abs(m)

[m,n] = input().split(" ")
m,n = int(m), int(n)
[a,b] = input().split(" ")
a,b = int(a), int(b)
son = m*b + n*a
mot = n*b
print(int(son/gcd(son,mot)),int(mot/gcd(son,mot)))
