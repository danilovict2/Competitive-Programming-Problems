Alice and Bob play the following game. Alice has a set S of disjoint ranges of integers, initially containing only one range [1,n]. In one turn, Alice picks a range [l,r] from the set S and asks Bob to pick a number in the range. Bob chooses a number d (l≤d≤r). Then Alice removes [l,r] from S and puts into the set S the range [l,d−1] (if l≤d−1) and the range [d+1,r] (if d+1≤r). The game ends when the set S is empty. We can show that the number of turns in each game is exactly n

.

After playing the game, Alice remembers all the ranges [l,r]
she picked from the set S, but Bob does not remember any of the numbers that he picked. But Bob is smart, and he knows he can find out his numbers d

from Alice's ranges, and so he asks you for help with your programming skill.

Given the list of ranges that Alice has picked ([l,r]
), for each range, help Bob find the number d

that Bob has picked.

We can show that there is always a unique way for Bob to choose his number for a list of valid ranges picked by Alice.