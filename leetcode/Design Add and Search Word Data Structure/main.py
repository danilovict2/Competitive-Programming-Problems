class Node:
    def __init__(self):
        self.children = {}
        self.isEndOfWord = False

class WordDictionary:

    def __init__(self):
        self.root = Node() 

    def addWord(self, word: str) -> None:
        cur = self.root
        for c in word:
            if c not in cur.children:
                cur.children[c] = Node()
            
            cur = cur.children[c]
        
        cur.isEndOfWord = True

    def search(self, word: str) -> bool:
        def dfs(cur, j):
            for i in range(j, len(word)):
                c = word[i]

                if c == '.':
                    for child in cur.children:
                        if dfs(cur.children[child], i + 1):
                            return True
                    return False
                else:
                    if c not in cur.children:
                        return False
                    cur = cur.children[c]

            return cur.isEndOfWord
        
        return dfs(self.root, 0)

