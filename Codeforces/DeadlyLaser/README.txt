The robot is placed in the top left corner of a grid, consisting of n rows and m columns, in a cell (1,1)

.

In one step, it can move into a cell, adjacent by a side to the current one:

    (x,y)→(x,y+1)

;
(x,y)→(x+1,y)
;
(x,y)→(x,y−1)
;
(x,y)→(x−1,y)

    . 

The robot can't move outside the grid.

The cell (sx,sy)
contains a deadly laser. If the robot comes into some cell that has distance less than or equal to d to the laser, it gets evaporated. The distance between two cells (x1,y1) and (x2,y2) is |x1−x2|+|y1−y2|

.

Print the smallest number of steps that the robot can take to reach the cell (n,m)
without getting evaporated or moving outside the grid. If it's not possible to reach the cell (n,m)

, print -1.

The laser is neither in the starting cell, nor in the ending cell. The starting cell always has distance greater than d
to the laser.