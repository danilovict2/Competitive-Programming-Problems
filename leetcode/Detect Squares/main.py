class DetectSquares:

    def __init__(self):
        self.cnt = defaultdict(int)
        self.pts = []
        
    def add(self, point: List[int]) -> None:
        self.pts.append(point)
        self.cnt[(point[0], point[1])] += 1
        
    def count(self, point: List[int]) -> int:
        ans = 0
        for x, y in self.pts:
            if (abs(x - point[0]) != abs(y - point[1])) or x == point[0] or y == point[1]:
                continue
            
            ans += self.cnt[(point[0], y)] * self.cnt[(x, point[1])]

        return ans
