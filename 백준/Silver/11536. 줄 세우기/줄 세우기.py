N = int(input())
Name = []
Increase = []
Decrease = []
for i in range(N):
    S = input()
    Name += [S]
    Increase += [S]
    Decrease += [S]
Increase.sort()
Decrease.sort()
Decrease.reverse()
if Name == Increase :
    print("INCREASING")
elif Name == Decrease:
    print("DECREASING")
else :
    print("NEITHER")
