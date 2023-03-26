You're given an array a1,…,an
of n

non-negative integers.

Let's call it sharpened if and only if there exists an integer 1≤k≤n
such that a1<a2<…<ak and ak>ak+1>…>an

. In particular, any strictly increasing or strictly decreasing array is sharpened. For example:

    The arrays [4]

, [0,1], [12,10,8] and [3,11,15,9,7,4]
are sharpened;
The arrays [2,8,2,8,6,5]
, [0,1,1,0] and [2,5,6,9,8,8]

    are not sharpened. 

You can do the following operation as many times as you want: choose any strictly positive element of the array, and decrease it by one. Formally, you can choose any i
(1≤i≤n) such that ai>0 and assign ai:=ai−1

.

Tell if it's possible to make the given array sharpened using some number (possibly zero) of these operations.