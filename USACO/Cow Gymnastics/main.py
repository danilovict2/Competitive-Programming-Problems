read = open("gymnastics.in")

k, n = list(map(int, read.readline().split()))
sessions = []
for _ in range(k):
    sessions.append(list(map(int, read.readline().split())))

ans = 0
for a in range(1, n + 1):
    for b in range(1, n + 1):
        if a == b:
            continue
        
        is_proper = 1
        for i in range(k):
            if sessions[i].index(a) > sessions[i].index(b):
                is_proper = 0
                break

        ans += is_proper
            


print(ans, file=open("gymnastics.out", "w"))
