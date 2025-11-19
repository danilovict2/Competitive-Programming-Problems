# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Codec:
    
    # Encodes a tree to a single string.
    def serialize(self, root: Optional[TreeNode]) -> str:
        q = deque([root])
        ret = ""
        while q:
            curr = q.popleft()
            if curr:
                q.append(curr.left)
                q.append(curr.right)
                ret += str(curr.val) + ","
            else:
                ret += "n,"
        return ret[:-1]

        
    # Decodes your encoded data to tree.
    def deserialize(self, data: str) -> Optional[TreeNode]:
        nodes = data.split(',')
        if nodes[0] == 'n':
            return None

        root = TreeNode(int(nodes[0])) 
        q = deque([root]) 
        idx = 1

        while q:
            curr = q.popleft()
            if nodes[idx] != 'n':
                curr.left = TreeNode(int(nodes[idx]))
                q.append(curr.left)
            idx += 1

            if nodes[idx] != 'n':
                curr.right = TreeNode(int(nodes[idx]))
                q.append(curr.right)
            idx += 1

        return root

