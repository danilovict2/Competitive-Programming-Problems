class Node:
    def __init__(self, key, val, prev = None, next = None):
        self.key = key
        self.val = val
        self.prev = prev
        self.next = next

class LinkedList:
    def __init__(self):
        self.head = Node(0, 0)
        self.tail = Node(0, 0)

        self.tail.prev, self.head.next = self.head, self.tail
    
    def add(self, node):
        prev, next = self.tail.prev, self.tail
        node.next, node.prev = next, prev
        prev.next = next.prev = node
    
    def remove(self, node):
        prev, next = node.prev, node.next
        prev.next, next.prev = next, prev
    
    def empty(self):
        return self.head.next == self.tail

class LFUCache:

    def __init__(self, capacity: int):
        self.cap = capacity

        self.counter = defaultdict(int)
        self.cache = {}
        self.count_list = defaultdict(LinkedList)
        self.last = 1

    def get(self, key: int) -> int:
        if key not in self.cache:
            return -1
        
        self.incr(key)
        return self.cache[key].val
    
    def incr(self, key):
        cnt = self.counter[key]
        self.counter[key] += 1
        if self.cache[key].prev != None and not self.count_list[cnt].empty():
            self.count_list[cnt].remove(self.cache[key])
            
        self.count_list[cnt + 1].add(self.cache[key])

        if cnt == self.last and self.count_list[cnt].empty():
            self.last += 1


    def put(self, key: int, value: int) -> None:
        if key in self.cache:
            self.count_list[self.counter[key]].remove(self.cache[key])

        if key not in self.cache and len(self.cache) == self.cap:
            lyst = self.count_list[self.last]
            k = lyst.head.next.key
            lyst.remove(lyst.head.next)
            self.counter[k] = 0
            del self.cache[k]

        self.cache[key] = Node(key, value)
        self.incr(key)
        self.last = min(self.last, self.counter[key])
        

