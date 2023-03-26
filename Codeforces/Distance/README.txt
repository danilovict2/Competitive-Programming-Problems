Let's denote the Manhattan distance between two points p1 (with coordinates (x1,y1)) and p2 (with coordinates (x2,y2)) as d(p1,p2)=|x1−x2|+|y1−y2|. For example, the distance between two points with coordinates (1,3) and (4,2) is |1−4|+|3−2|=4

.

You are given two points, A
and B. The point A has coordinates (0,0), the point B has coordinates (x,y)

.

Your goal is to find a point C

such that:

    both coordinates of C

are non-negative integers;
d(A,C)=d(A,B)2
(without any rounding);
d(B,C)=d(A,B)2

    (without any rounding). 

Find any point C
that meets these constraints, or report that no such point exists.