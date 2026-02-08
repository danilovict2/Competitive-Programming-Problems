class Solution:
    def openLock(self, deadends: List[str], target: str) -> int:
        def children(lock):
            res = []
            for i in range(4):
                digit = str((int(lock[i]) + 1) % 10)
                res.append(lock[:i] + digit + lock[i+1:])
                digit = str((int(lock[i]) - 1 + 10) % 10)
                res.append(lock[:i] + digit + lock[i+1:])
            return res

        seen = set(deadends)
        if "0000" in seen:
            return -1

        q = deque([("0000", 0)])
        while q:
            lock, turns = q.popleft()
            if lock == target:
                return turns

            for c in children(lock):
                if c not in seen:
                    seen.add(c)
                    q.append((c, turns + 1))
        
        return -1
