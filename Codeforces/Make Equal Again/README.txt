You have an array a of n

integers.

You can no more than once apply the following operation: select three integers i
, j, x (1≤i≤j≤n) and assign all elements of the array with indexes from i to j the value x. The price of this operation depends on the selected indices and is equal to (j−i+1)

burles.

For example, the array is equal to [1,2,3,4,5,1]
. If we choose i=2,j=4,x=8, then after applying this operation, the array will be equal to [1,8,8,8,5,1]

.

What is the least amount of burles you need to spend to make all the elements of the array equal?