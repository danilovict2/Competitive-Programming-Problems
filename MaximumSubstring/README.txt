A binary string is a string consisting only of the characters 0 and 1. You are given a binary string s

.

For some non-empty substring†
t of string s containing x characters 0 and y

characters 1, define its cost as:

    x⋅y

, if x>0 and y>0
;
x2
, if x>0 and y=0
;
y2
, if x=0 and y>0

    . 

Given a binary string s
of length n

, find the maximum cost across all its non-empty substrings.

†
A string a is a substring of a string b if a can be obtained from b by deletion of several (possibly, zero or all) characters from the beginning and several (possibly, zero or all) characters from the end.