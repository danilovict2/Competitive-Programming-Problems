You are given two strings a and b of length n. Then, you are (forced against your will) to answer q

queries.

For each query, you are given a range bounded by l
and r. In one operation, you can choose an integer i (l≤i≤r) and set ai=x where x is any character you desire. Output the minimum number of operations you must perform such that sorted(a[l..r])=sorted(b[l..r])

. The operations you perform on one query does not affect other queries.

For an arbitrary string c
, sorted(c[l..r]) denotes the substring consisting of characters cl,cl+1,...,cr sorted in lexicographical order.