class Node:
    def __init__(self, val, next = None):
        self.val = val
        self.next = next


class MyCircularQueue:

    def __init__(self, k: int):
        self.space = k
        self.front = Node(0)
        self.back = self.front
        
    def enQueue(self, value: int) -> bool:
        if self.isFull():
            return False
        
        node = Node(value)
        if self.isEmpty():
            self.front.next = node
            self.back = node
        else:
            self.back.next = node
            self.back = node
        
        self.space -= 1
        return True

    def deQueue(self) -> bool:
        if self.isEmpty():
            return False
        
        self.front = self.front.next
        if self.front.next is None:
            self.back = self.front

        self.space += 1
        return True

    def Front(self) -> int:
        if self.isEmpty():
            return -1
        
        return self.front.next.val

    def Rear(self) -> int:
        if self.isEmpty():
            return -1
        
        return self.back.val

    def isEmpty(self) -> bool:
        return self.front.next == None

    def isFull(self) -> bool:
        return self.space == 0
        


# Your MyCircularQueue object will be instantiated and called as such:
# obj = MyCircularQueue(k)
# param_1 = obj.enQueue(value)
# param_2 = obj.deQueue()
# param_3 = obj.Front()
# param_4 = obj.Rear()
# param_5 = obj.isEmpty()
# param_6 = obj.isFull()
