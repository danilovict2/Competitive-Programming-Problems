There are n flowers in a row, the i-th of them initially has a positive height of hi

meters.

Every second, the wind will blow from the left, causing the height of some flowers to decrease.

Specifically, every second, for each i
from 1 to n

, in this order, the following happens:

    If i=n

or hi>hi+1, the value of hi changes to max(0,hi−1)

    . 

How many seconds will pass before hi=0
for all 1≤i≤n for the first time?