A = 1000 - int(input())
sum = 0
sum += int(A/500)
A = A % 500
sum += int(A/100)
A = A % 100
sum += int(A/50)
A = A % 50
sum += int(A/10)
A = A % 10
sum += int(A/5)
A = A % 5
sum += int(A/1)
A = A % 1
print(sum)
