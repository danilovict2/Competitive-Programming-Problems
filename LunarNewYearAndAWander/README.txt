Lunar New Year is approaching, and Bob decides to take a wander in a nearby park.

The park can be represented as a connected graph with n
nodes and m bidirectional edges. Initially Bob is at the node 1 and he records 1 on his notebook. He can wander from one node to another through those bidirectional edges. Whenever he visits a node not recorded on his notebook, he records it. After he visits all nodes at least once, he stops wandering, thus finally a permutation of nodes a1,a2,…,an

is recorded.

Wandering is a boring thing, but solving problems is fascinating. Bob wants to know the lexicographically smallest sequence of nodes he can record while wandering. Bob thinks this problem is trivial, and he wants you to solve it.

A sequence x
is lexicographically smaller than a sequence y

if and only if one of the following holds:

    x

is a prefix of y, but x≠y
(this is impossible in this problem as all considered sequences have the same length);
in the first position where x
and y differ, the sequence x has a smaller element than the corresponding element in y.