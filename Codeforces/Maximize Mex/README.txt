You are given an array a of n positive integers and an integer x

. You can do the following two-step operation any (possibly zero) number of times:

    Choose an index i

(1≤i≤n
).
Increase ai
by x, in other words ai:=ai+x

    . 

Find the maximum value of the MEX
of a

if you perform the operations optimally.

The MEX

(minimum excluded value) of an array is the smallest non-negative integer that is not in the array. For example:

    The MEX

of [2,2,1] is 0 because 0
is not in the array.
The MEX
of [3,1,0,1] is 2 because 0 and 1 are in the array but 2
is not.
The MEX
of [0,3,1,2] is 4 because 0, 1, 2 and 3 are in the array but 4 is not. 