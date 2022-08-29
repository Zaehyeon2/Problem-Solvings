x,y,w,h = input().split(" ")
x,y,w,h = int(x),int(y),int(w),int(h)
if x < w-x :
    x_dis = x
else :
    x_dis = w-x
if y < h-y :
    y_dis = y
else :
    y_dis = h-y
if x_dis >= y_dis:
    print(y_dis)
else :
    print(x_dis)
