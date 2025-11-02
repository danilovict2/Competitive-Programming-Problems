"""
# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random
"""

class Solution:
    def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
        nodes = {}
        dummy = Node(0)
        curr = dummy
        new_head = head
        i = 0
        while new_head:
            curr.next = Node(new_head.val)
            nodes[new_head] = curr.next
            curr = curr.next
            new_head = new_head.next
        
        curr = dummy.next
        while head:
            curr.random = nodes[head.random] if head.random else None
            curr = curr.next
            head = head.next
        return dummy.next

