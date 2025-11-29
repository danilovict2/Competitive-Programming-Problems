"""
# Definition for a Node.
class Node:
    def __init__(self, val = 0, neighbors = None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []
"""

class Solution:
    def cloneGraph(self, node: Optional['Node']) -> Optional['Node']:
        if not node:
            return None

        nodes = {}
        nodes[node] = Node(node.val)
        q = deque([node])

        while q:
            v = q.popleft()

            for neighbor in v.neighbors:
                if neighbor not in nodes:
                    nodes[neighbor] = Node(neighbor.val)
                    q.append(neighbor)
                nodes[v].neighbors.append(nodes[neighbor])
        
        return nodes[node]

