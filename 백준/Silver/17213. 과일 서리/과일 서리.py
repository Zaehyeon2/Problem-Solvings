n = int(input())
k = int(input())

def fac(n) :
		sum = 1
		for i in range(1, n+1):
			sum *= i
		return sum

if n == k :
	print("1")

else :
	k = k - n
	left = n + k - 1
	print(int(fac(left)/(fac(k)*fac(left-k))))