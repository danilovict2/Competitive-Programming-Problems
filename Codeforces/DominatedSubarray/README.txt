Let's call an array t dominated by value v

in the next situation.

At first, array t
should have at least 2 elements. Now, let's calculate number of occurrences of each number num in t and define it as occ(num). Then t is dominated (by v) if (and only if) occ(v)>occ(v′) for any other number v′. For example, arrays [1,2,3,4,5,2], [11,11] and [3,2,3,2,3] are dominated (by 2, 11 and 3 respectevitely) but arrays [3], [1,2] and [3,3,2,2,1]

are not.

Small remark: since any array can be dominated only by one number, we can not specify this number and just say that array is either dominated or not.

You are given array a1,a2,…,an

. Calculate its shortest dominated subarray or say that there are no such subarrays.

The subarray of a
is a contiguous part of the array a, i. e. the array ai,ai+1,…,aj for some 1≤i≤j≤n.