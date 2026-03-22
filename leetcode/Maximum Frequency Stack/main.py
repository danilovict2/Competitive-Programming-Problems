class FreqStack:

    def __init__(self):
        self.cnt = defaultdict(int)
        self.last = 0
        self.stacks = defaultdict(list)
        

    def push(self, val: int) -> None:
        self.cnt[val] += 1
        self.last = max(self.last, self.cnt[val])
        self.stacks[self.cnt[val]].append(val)
        

    def pop(self) -> int:
        elem = self.stacks[self.last].pop()
        self.cnt[elem] -= 1
        if len(self.stacks[self.last]) == 0:
            self.last -= 1
        
        return elem
