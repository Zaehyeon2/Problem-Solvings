person = int(input())
cute = 0
uncute = 0
while person > 0 :
    S = int(input())
    if S == 1 :
        cute += 1
    elif S == 0 :
        uncute += 1
    person -= 1
if cute > uncute :
    print("Junhee is cute!")
else :
    print("Junhee is not cute!")
