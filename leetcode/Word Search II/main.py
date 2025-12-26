class Node:
    def __init__(self):
        self.children = {}
        self.isEndOfWord = False
    
    def addWord(self, word):
        cur = self
        for c in word:
            if c not in cur.children:
                cur.children[c] = Node()
            
            cur = cur.children[c]
        
        cur.isEndOfWord = True

class Solution:
    def findWords(self, board: List[List[str]], words: List[str]) -> List[str]:
        R, C = len(board), len(board[0])
        trie = Node()
        for word in words:
            trie.addWord(word)
        
        res, vis = set(), set()

        def dfs(i, j, node, word):
            if i < 0 or j < 0 or i >= R or j >= C or (i, j) in vis or board[i][j] not in node.children:
                return
            
            vis.add((i, j))
            node = node.children[board[i][j]]
            word += board[i][j]
            if node.isEndOfWord:
                res.add(word)
            
            dfs(i + 1, j, node, word)
            dfs(i, j + 1, node, word)
            dfs(i - 1, j, node, word)
            dfs(i, j - 1, node, word)
            vis.remove((i, j))

        for i in range(R):
            for j in range(C):
                dfs(i, j, trie, "")

        return list(res)
