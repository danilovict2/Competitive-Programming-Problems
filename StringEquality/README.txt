Ashish has two strings a and b, each of length n, and an integer k

. The strings only contain lowercase English letters.

He wants to convert string a
into string b by performing some (possibly zero) operations on a

.

In one move, he can either

    choose an index i

(1≤i≤n−1) and swap ai and ai+1
, or
choose an index i
(1≤i≤n−k+1) and if ai,ai+1,…,ai+k−1 are all equal to some character c (c≠ 'z'), replace each one with the next character (c+1)

    , that is, 'a' is replaced by 'b', 'b' is replaced by 'c' and so on. 

Note that he can perform any number of operations, and the operations can only be performed on string a

.

Help Ashish determine if it is possible to convert string a
into b after performing some (possibly zero) operations on it.