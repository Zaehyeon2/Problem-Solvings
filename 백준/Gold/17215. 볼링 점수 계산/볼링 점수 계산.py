inpp = input()
score = 0
inp = ''


cnt = 0
double = [0]*(len(inpp)+7)

i = 0

for i in range(len(inpp)):
	if(inpp[i] == '-'):
		inp += '0'
	else :
		inp += inpp[i]

i = 0

inp += '0000000'

while(i < len(inpp)):
	# print(i)
	if(cnt >= 9) :
		if inp[i] == 'S' :
			score += 10 + double[i]*10
			cnt += 1
			i += 1
		else :
			if inp[i+1] == 'P' :
				score += 10
				score += int(inp[i])*double[i] + (10 - int(inp[i]))*double[i+1]
			else :
				score += int(inp[i]) + int(inp[i+1])
				score += int(inp[i])*double[i] + int(inp[i+1])*double[i+1]
			cnt += 1
			i += 2
	else :
		if inp[i] == 'S' :
			score += 10 + double[i]*10
			double[i+1] += 1
			double[i+2] += 1
			cnt += 1
			i += 1
		else :
			if inp[i+1] == 'P' :
				score += 10
				double[i+2] += 1
				score += int(inp[i])*double[i] + (10 - int(inp[i]))*double[i+1]
			else :
				score += int(inp[i]) + int(inp[i+1])
				score += int(inp[i])*double[i] + int(inp[i+1])*double[i+1]
			cnt += 1
			i += 2
print(score)

		
