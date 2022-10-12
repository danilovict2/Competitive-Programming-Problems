This is the easy version of the problem. The only difference between the two versions is that the harder version asks additionally for a minimum number of subsegments.

Tokitsukaze has a binary string s
of length n, consisting only of zeros and ones, n

is even.

Now Tokitsukaze divides s
into the minimum number of contiguous subsegments, and for each subsegment, all bits in each subsegment are the same. After that, s

is considered good if the lengths of all subsegments are even.

For example, if s
is "11001111", it will be divided into "11", "00" and "1111". Their lengths are 2, 2, 4 respectively, which are all even numbers, so "11001111" is good. Another example, if s is "1110011000", it will be divided into "111", "00", "11" and "000", and their lengths are 3, 2, 2, 3

. Obviously, "1110011000" is not good.

Tokitsukaze wants to make s
good by changing the values of some positions in s. Specifically, she can perform the operation any number of times: change the value of si to '0' or '1'(1≤i≤n). Can you tell her the minimum number of operations to make s good?