class Solution:
    def ladderLength(self, beginWord: str, endWord: str, wordList: List[str]) -> int:
        if (endWord not in wordList) or beginWord == endWord:
            return 0

        adj = defaultdict(list)
        for word in wordList:
            for i in range(len(word)):
                pattern = word[:i] + '*' + word[i + 1:]
                adj[pattern].append(word)
        
        q = deque([beginWord])
        vis = set([beginWord])
        ans = 0
        while q:
            ans += 1
            for _ in range(len(q)):
                word = q.popleft()
                if word == endWord:
                    return ans
                
                for i in range(len(word)):
                    pattern = word[:i] + '*' + word[i + 1:]
                    for w in adj[pattern]:
                        if w not in vis:
                            q.append(w)
                            vis.add(w)

        return 0
