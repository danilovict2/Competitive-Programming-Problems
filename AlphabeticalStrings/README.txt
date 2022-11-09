A string s
of length n (1≤n≤26

) is called alphabetical if it can be obtained using the following algorithm:

    first, write an empty string to s

(i.e. perform the assignment s
 := "");
then perform the next step n
times;
at the i
-th step take i-th lowercase letter of the Latin alphabet and write it either to the left of the string s or to the right of the string s (i.e. perform the assignment s := c+s or s := s+c, where c is the i

    -th letter of the Latin alphabet). 

In other words, iterate over the n
first letters of the Latin alphabet starting from 'a' and etc. Each time we prepend a letter to the left of the string s or append a letter to the right of the string s

. Strings that can be obtained in that way are alphabetical.

For example, the following strings are alphabetical: "a", "ba", "ab", "bac" and "ihfcbadeg". The following strings are not alphabetical: "z", "aa", "ca", "acb", "xyz" and "ddcba".

From the given string, determine if it is alphabetical.