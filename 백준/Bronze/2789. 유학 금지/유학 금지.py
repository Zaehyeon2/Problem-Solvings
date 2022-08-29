inp = list(input())
remv = ['C','A','M','B','R','I','D','G','E']
ans = ''
for x in inp:
    if x not in remv:
        ans += x
print(ans)
