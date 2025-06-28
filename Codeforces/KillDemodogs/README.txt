Demodogs from the Upside-down have attacked Hawkins again. El wants to reach Mike and also kill as many Demodogs in the way as possible.

Hawkins can be represented as an n×n
grid. The number of Demodogs in a cell at the i-th row and the j-th column is i⋅j. El is at position (1,1) of the grid, and she has to reach (n,n)

where she can find Mike.

The only directions she can move are the right (from (i,j)
to (i,j+1)) and the down (from (i,j) to (i+1,j)

). She can't go out of the grid, as there are doors to the Upside-down at the boundaries.

Calculate the maximum possible number of Demodogs ans

she can kill on the way, considering that she kills all Demodogs in cells she visits (including starting and finishing cells).

Print 2022⋅ans
modulo 109+7. Modulo 109+7 because the result can be too large and multiplied by 2022

because we are never gonna see it again!

(Note, you firstly multiply by 2022
and only after that take the remainder.)