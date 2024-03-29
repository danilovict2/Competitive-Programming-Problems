Vivek has encountered a problem. He has a maze that can be represented as an n×m

grid. Each of the grid cells may represent the following:

    Empty — '.'
    Wall — '#'
    Good person  — 'G'
    Bad person — 'B' 

The only escape from the maze is at cell (n,m)

.

A person can move to a cell only if it shares a side with their current cell and does not contain a wall. Vivek wants to block some of the empty cells by replacing them with walls in such a way, that all the good people are able to escape, while none of the bad people are able to. A cell that initially contains 'G' or 'B' cannot be blocked and can be travelled through.

Help him determine if there exists a way to replace some (zero or more) empty cells with walls to satisfy the above conditions.

It is guaranteed that the cell (n,m)

is empty. Vivek can also block this cell.
