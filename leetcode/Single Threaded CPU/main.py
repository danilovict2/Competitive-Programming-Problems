class Solution:
    def getOrder(self, tasks: List[List[int]]) -> List[int]:
        tasks_with_index = []
        for i, (e, p) in enumerate(tasks):
            tasks_with_index.append((e, p, i))
        tasks_with_index.sort()
        
        n = len(tasks)
        i, t = 0, tasks_with_index[0][0]
        ans, q = [], []

        while i < n or q:
            while i < n and tasks_with_index[i][0] <= t:
                heapq.heappush(q, (tasks_with_index[i][1], tasks_with_index[i][2]))
                i += 1
            
            if not q:
                t = tasks_with_index[i][0]
                continue

            p_time, idx = heapq.heappop(q)
            ans.append(idx)
            t += p_time
            
        return ans
