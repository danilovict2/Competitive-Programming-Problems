You are given a string s[1…n] consisting of lowercase Latin letters. It is guaranteed that n=2k for some integer k≥0

.

The string s[1…n]
is called c

-good if at least one of the following three conditions is satisfied:

    The length of s

is 1, and it consists of the character c (i.e. s1=c
);
The length of s
is greater than 1, the first half of the string consists of only the character c (i.e. s1=s2=⋯=sn2=c) and the second half of the string (i.e. the string sn2+1sn2+2…sn) is a (c+1)
-good string;
The length of s
is greater than 1, the second half of the string consists of only the character c (i.e. sn2+1=sn2+2=⋯=sn=c) and the first half of the string (i.e. the string s1s2…sn2) is a (c+1)

    -good string. 

For example: "aabc" is 'a'-good, "ffgheeee" is 'e'-good.

In one move, you can choose one index i
from 1 to n and replace si

with any lowercase Latin letter (any character from 'a' to 'z').

Your task is to find the minimum number of moves required to obtain an 'a'-good string from s
(i.e. c-good string for c=

'a'). It is guaranteed that the answer always exists.

You have to answer t

independent test cases.

Another example of an 'a'-good string is as follows. Consider the string s=

"cdbbaaaa". It is an 'a'-good string, because:

    the second half of the string ("aaaa") consists of only the character 'a';
    the first half of the string ("cdbb") is 'b'-good string, because:
        the second half of the string ("bb") consists of only the character 'b';
        the first half of the string ("cd") is 'c'-good string, because:
            the first half of the string ("c") consists of only the character 'c';
            the second half of the string ("d") is 'd'-good string. 

