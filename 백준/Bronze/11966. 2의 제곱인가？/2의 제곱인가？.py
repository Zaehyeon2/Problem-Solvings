sqare = []
for i in range(0,31):
    sqare += [str(2**i)]
N = input()
if N in sqare:
    print("1")
else :
    print("0")
