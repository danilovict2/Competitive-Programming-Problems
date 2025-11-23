class Twitter:

    def __init__(self):
        self.friends = defaultdict(set) # userId -> followeeIds
        self.tweets = defaultdict(list)  # userId -> [[t, tweetId]]
        self.t = 0
        

    def postTweet(self, userId: int, tweetId: int) -> None:
        self.tweets[userId].append([self.t, tweetId])
        self.t -= 1
        

    def getNewsFeed(self, userId: int) -> List[int]:
        self.friends[userId].add(userId)
        minHeap = []

        for followeeId in self.friends[userId]:
            if followeeId in self.tweets:
                index = len(self.tweets[followeeId]) - 1
                t, tweetId = self.tweets[followeeId][index]
                heapq.heappush(minHeap, [t, tweetId, followeeId, index - 1])
        
        ans = []
        while minHeap and len(ans) < 10:
            t, tweetId, followeeId, index = heapq.heappop(minHeap)
            ans.append(tweetId)
            if index >= 0:
                t, tweetId = self.tweets[followeeId][index]
                heapq.heappush(minHeap, [t, tweetId, followeeId, index - 1])
        
        return ans

    def follow(self, followerId: int, followeeId: int) -> None:
        self.friends[followerId].add(followeeId)

    def unfollow(self, followerId: int, followeeId: int) -> None:
        if followeeId in self.friends[followerId]:
            self.friends[followerId].remove(followeeId)

