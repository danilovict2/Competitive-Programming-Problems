Polycarp calls an array dense if the greater of any two adjacent elements is not more than twice bigger than the smaller. More formally, for any i (1≤i≤n−1), this condition must be satisfied:
max(a[i],a[i+1])min(a[i],a[i+1])≤2

For example, the arrays [1,2,3,4,3]
, [1,1,1] and [5,10] are dense. And the arrays [5,11], [1,4,2], [6,6,1]

are not dense.

You are given an array a
of n

integers. What is the minimum number of numbers you need to add to an array to make it dense? You can insert numbers anywhere in the array. If the array is already dense, no numbers need to be added.

For example, if a=[4,2,10,1]
, then the answer is 5, and the array itself after inserting elements into it may look like this: a=[4,2,3––,5––,10,6––,4––,2––,1] (there are other ways to build such a).