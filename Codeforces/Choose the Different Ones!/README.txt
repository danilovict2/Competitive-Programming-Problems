Given an array a of n integers, an array b of m integers, and an even number k

.

Your task is to determine whether it is possible to choose exactly k2
elements from both arrays in such a way that among the chosen elements, every integer from 1 to k

is included.

For example:

    If a=[2,3,8,5,6,5]

, b=[1,3,4,10,5], k=6, then it is possible to choose elements with values 2,3,6 from array a and elements with values 1,4,5 from array b. In this case, all numbers from 1 to k=6
will be included among the chosen elements.
If a=[2,3,4,5,6,5]
, b=[1,3,8,10,3], k=6

    , then it is not possible to choose elements in the required way. 

Note that you are not required to find a way to choose the elements — your program should only check whether it is possible to choose the elements in the required way.