Pay attention to the non-standard memory limit in this problem.

In order to cut off efficient solutions from inefficient ones in this problem, the time limit is rather strict. Prefer to use compiled statically typed languages (e.g. C++). If you use Python, then submit solutions on PyPy. Try to write an efficient solution.

The array a=[a1,a2,…,an]
(1≤ai≤n) is given. Its element ai is called special if there exists a pair of indices l and r (1≤l<r≤n) such that ai=al+al+1+…+ar

. In other words, an element is called special if it can be represented as the sum of two or more consecutive elements of an array (no matter if they are special or not).

Print the number of special elements of the given array a

.

For example, if n=9
and a=[3,1,4,1,5,9,2,6,5], then the answer is 5

:

    a3=4

is a special element, since a3=4=a1+a2=3+1
;
a5=5
is a special element, since a5=5=a2+a3=1+4
;
a6=9
is a special element, since a6=9=a1+a2+a3+a4=3+1+4+1
;
a8=6
is a special element, since a8=6=a2+a3+a4=1+4+1
;
a9=5
is a special element, since a9=5=a2+a3=1+4

    . 

Please note that some of the elements of the array a
may be equal — if several elements are equal and special, then all of them should be counted in the answer.