count = 0
test_n = int(input())
while count < test_n :
    dice = input().partition(" ")
    count += 1
    print("Case %d:" %count , int(dice[0]) + int(dice[2]))
