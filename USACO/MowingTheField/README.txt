Farmer John is quite reliable in all aspects of managing his farm, except one: he is terrible at mowing the grass in a timely or logical fashion.

The farm is a large 2D grid of square unit cells. FJ starts in one of these cells at time t=0
, mowing the grass in this cell so that it is initially the only cell in which the grass is cut. FJ's remaining mowing pattern is described by a sequence of N statements. For example, if the first statement is "W 10", then for times t=1 through t=10 (i.e., the next 10 units of time), FJ will step one cell to his west, mowing the grass along the way. After completing this sequence of steps, he will end up 10 cells to his west at time t=10

, having mowed the grass in every cell along the way.

So slow is FJ's progress that some of the grass he mows might grow back before he is finished with all his mowing. Any section of grass that is cut at time t
will reappear at time t+x

.

FJ's mowing pattern might have him re-visit the same cell multiple times, but he remarks that he never encounters a cell in which the grass is already cut. That is, every time he visits a cell, his most recent visit to that same cell must have been at least x

units of time earlier, in order for the grass to have grown back.

Please determine the maximum possible value of x
so that FJ's observation remains valid. 