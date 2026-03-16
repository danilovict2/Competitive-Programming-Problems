class Solution:
    def isAlienSorted(self, words: List[str], order: str) -> bool:
        pos = {order[i]: i for i in range(len(order))} 
        for i in range(len(words) - 1):
            w1 = words[i]
            w2 = words[i + 1]
            minLen = min(len(w1), len(w2))
            if w1[:minLen] == w2[:minLen] and len(w1) > len(w2):
                return False

            for j in range(minLen):
                if w1[j] != w2[j]:
                    if pos[w1[j]] > pos[w2[j]]:
                        return False
                    break

        return True
