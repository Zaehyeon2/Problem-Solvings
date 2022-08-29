Name = []*5
ans = ''
for i in range(5):
    Name += [input()]
for i in range(5):
    if 'FBI' in Name[i]:
        ans += str(i+1) + " "
if ans != '':
    print(ans[:-1])
else :
    print('HE GOT AWAY!')
