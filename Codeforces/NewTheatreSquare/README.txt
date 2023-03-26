You might have remembered Theatre square from the problem 1A. Now it's finally getting repaved.

The square still has a rectangular shape of n×m
meters. However, the picture is about to get more complicated now. Let ai,j be the j-th square in the i

-th row of the pavement.

You are given the picture of the squares:

    if ai,j=

"*", then the j-th square in the i
-th row should be black;
if ai,j=
".", then the j-th square in the i

    -th row should be white. 

The black squares are paved already. You have to pave the white squares. There are two options for pavement tiles:

    1×1

tiles — each tile costs x burles and covers exactly 1
square;
1×2
tiles — each tile costs y burles and covers exactly 2 adjacent squares of the same row. Note that you are not allowed to rotate these tiles or cut them into 1×1

    tiles. 

You should cover all the white squares, no two tiles should overlap and no black squares should be covered by tiles.

What is the smallest total price of the tiles needed to cover all the white squares?