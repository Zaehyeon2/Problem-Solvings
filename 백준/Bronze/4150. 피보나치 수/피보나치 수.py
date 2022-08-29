def fibseq(n):
    fibs = [0, 1]
    for k in range(2, n + 1):
        fibs.append(fibs[k - 1] + fibs[k - 2])
    return fibs

def fib(n):
    return fibseq(n)[-1]

print(fib(int(input())))
