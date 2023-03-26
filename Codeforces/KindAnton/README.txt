Once again, Boris needs the help of Anton in creating a task. This time Anton needs to solve the following problem:

There are two arrays of integers a
and b of length n. It turned out that array a contains only elements from the set {−1,0,1}

.

Anton can perform the following sequence of operations any number of times:

    Choose any pair of indexes (i,j)

such that 1≤i<j≤n. It is possible to choose the same pair (i,j)
more than once.
Add ai
to aj. In other words, j-th element of the array becomes equal to ai+aj

    . 

For example, if you are given array [1,−1,0]
, you can transform it only to [1,−1,−1], [1,0,0] and [1,−1,1]

by one operation.

Anton wants to predict if it is possible to apply some number (zero or more) of these operations to the array a
so that it becomes equal to array b. Can you help him?