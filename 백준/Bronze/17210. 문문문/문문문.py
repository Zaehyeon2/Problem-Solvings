a = int(input())
b = int(input())

if(a >= 6) :
	print("Love is open door")

else :
	for i in range(a-1) :
		if(b == 1) :
			b = 0
		else :
			b = 1
		print(b)