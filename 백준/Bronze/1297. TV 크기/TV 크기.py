import math as m

Inch, A, B = input().split(" ")
Inch, A, B = int(Inch),int(A),int(B)
Inch *= Inch
Bi = Inch / (A*A+B*B)
print(m.trunc(A*m.sqrt(Bi)),m.trunc(B*m.sqrt(Bi)))
