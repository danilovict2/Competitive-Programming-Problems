read = open("blocks.in")

n = int(read.readline())

total = [0] * 26
for _ in range(n):
    w1, w2 = read.readline().split()
    c1, c2 = [0] * 26, [0] * 26

    for c in w1:
        c1[ord(c) - ord("a")] += 1

    for c in w2:
        c2[ord(c) - ord("a")] += 1

    for j in range(26):
        total[j] += max(c1[j], c2[j])

print("\n".join(map(str, total)), file=open("blocks.out", "w"))
