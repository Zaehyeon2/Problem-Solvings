black = '0'
brown = '1'
red	= '2'
orange = '3'
yellow = '4'
green = '5'
blue = '6'
violet = '7'
grey = '8'
white = '9'
ans = ''
for i in range(2):
    inp = input()
    if inp == 'black' :
        ans += '0'
    if inp == 'brown' :
        ans += '1'
    if inp == 'red' :
        ans += '2'
    if inp == 'orange' :
        ans += '3'
    if inp == 'yellow' :
        ans += '4'
    if inp == 'green' :
        ans += '5'
    if inp == 'blue' :
        ans += '6'
    if inp == 'violet' :
        ans += '7'
    if inp == 'grey' :
        ans += '8'
    if inp == 'white':
        ans += '9'
ans = int(ans)
inp = input()
if inp == 'black' :
    ans *= 1
if inp == 'brown' :
    ans *= 10
if inp == 'red' :
    ans *= 100
if inp == 'orange' :
    ans *= 1000
if inp == 'yellow' :
    ans *= 10000
if inp == 'green' :
    ans *= 100000
if inp == 'blue' :
    ans *= 1000000
if inp == 'violet' :
    ans *= 10000000
if inp == 'grey' :
    ans *= 100000000
if inp == 'white':
    ans *= 1000000000
print(ans)
