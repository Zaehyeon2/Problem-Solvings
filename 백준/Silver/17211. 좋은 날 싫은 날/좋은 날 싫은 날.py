N, current = list(map(int,input().split(" ")))
sts, stra, rts, rtr = list(map(float,input().split(" ")))
state = [0, 0]
state[current] = 1
for i in range(N) :
	state[0], state[1] = state[0] * sts + state[1] * rts, state[1] * rtr + state[0] * stra
print(round(state[0]*1000))
print(round(state[1]*1000))