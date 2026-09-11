read = open("lostcow.in")

x, y = read.readline().split()
x, y = int(x), int(y)

farmer_pos = x
jump = 1
ans = 0

for i in range(30):
    new_pos = x + jump

    if min(farmer_pos, new_pos) <= y <= max(farmer_pos, new_pos):
        ans += abs(farmer_pos - y)
        break

    ans += abs(farmer_pos - new_pos)
    farmer_pos = new_pos
    jump *= -2


print(ans, file=open("lostcow.out", "w"))
