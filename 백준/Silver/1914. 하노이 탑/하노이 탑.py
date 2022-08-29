s = 1
t = 2
e = 3

def hanoi(n,s,e,t):
    if n == 0 :
        return
    hanoi(n-1,s,t,e)
    print(s,e)
    hanoi(n-1,t,e,s)

n = int(input())
print(2 ** n - 1)
if (n <= 20) :
    hanoi(n,s,e,t)
