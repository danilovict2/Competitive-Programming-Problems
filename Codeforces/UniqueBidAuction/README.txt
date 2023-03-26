There is a game called "Unique Bid Auction". You can read more about it here: https://en.wikipedia.org/wiki/Unique_bid_auction (though you don't have to do it to solve this problem).

Let's simplify this game a bit. Formally, there are n
participants, the i-th participant chose the number ai. The winner of the game is such a participant that the number he chose is unique (i. e. nobody else chose this number except him) and is minimal (i. e. among all unique values of a

the minimum one is the winning one).

Your task is to find the index of the participant who won the game (or -1 if there is no winner). Indexing is 1
-based, i. e. the participants are numbered from 1 to n

.

You have to answer t
independent test cases.