Science = []
Society = []
for _ in range(4):
    Science += [int(input())]
for _ in range(2):
    Society += [int(input())]
Science.sort()
Society.sort()
print(Science[3]+Science[2]+Science[1]+Society[1])
