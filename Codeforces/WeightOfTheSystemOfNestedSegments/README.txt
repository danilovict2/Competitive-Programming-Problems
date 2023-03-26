On the number line there are m
points, i-th of which has integer coordinate xi and integer weight wi. The coordinates of all points are different, and the points are numbered from 1 to m

.

A sequence of n
segments [l1,r1],[l2,r2],…,[ln,rn] is called system of nested segments if for each pair i,j (1≤i<j≤n) the condition li<lj<rj<ri

is satisfied. In other words, the second segment is strictly inside the first one, the third segment is strictly inside the second one, and so on.

For a given number n

, find a system of nested segments such that:

    both ends of each segment are one of m

given points;
the sum of the weights 2⋅n

    of the points used as ends of the segments is minimal. 

For example, let m=8

. The given points are marked in the picture, their weights are marked in red, their coordinates are marked in blue. Make a system of three nested segments:

    weight of the first segment: 1+1=2

weight of the second segment: 10+(−1)=9
weight of the third segment: 3+(−2)=1
sum of the weights of all the segments in the system: 2+9+1=12