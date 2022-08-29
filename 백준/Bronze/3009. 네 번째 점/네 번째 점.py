x_list = [0]*1001
y_list = [0]*1001
for _ in range(3):
    [x,y] = input().split(" ")
    x_list[int(x)] += 1
    y_list[int(y)] += 1
for i in range(1001):
    if x_list[i] == 1:
        ans_x = i
    if y_list[i] == 1:
        ans_y = i
print(ans_x,ans_y)
