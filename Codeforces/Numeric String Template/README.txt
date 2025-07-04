Kristina has an array a, called a template, consisting of n integers. She also has m strings, each consisting only of lowercase Latin letters. The strings are numbered from 1 to m

. She wants to check which strings match the template.

A string s

is considered to match the template if all of the following conditions are simultaneously satisfied:

    The length of the string s

is equal to the number of elements in the array a
.
The same numbers from a
correspond to the same symbols from s. So, if ai=aj, then si=sj for (1≤i,j≤n
).
The same symbols from s
correspond to the same numbers from a. So, if si=sj, then ai=aj for (1≤i,j≤n

    ).

In other words, there must be a one-to-one correspondence between the characters of the string and the elements of the array.

For example, if a
= [3,5,2,1,3], then the string "abfda" matches the template, while the string "afbfa" does not, since the character "f" corresponds to both numbers 1 and 5.