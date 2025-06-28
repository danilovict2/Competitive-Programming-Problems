You are given three strings s, t and p

consisting of lowercase Latin letters. You may perform any number (possibly, zero) operations on these strings.

During each operation you choose any character from p
, erase it from p and insert it into string s (you may insert this character anywhere you want: in the beginning of s

, in the end or between any two consecutive characters).

For example, if p
is aba, and s is de, then the following outcomes are possible (the character we erase from p and insert into s

is highlighted):

    aba →

ba, de →
ade;
aba →
ba, de →
dae;
aba →
ba, de →
dea;
aba →
aa, de →
bde;
aba →
aa, de →
dbe;
aba →
aa, de →
deb;
aba →
ab, de →
ade;
aba →
ab, de →
dae;
aba →
ab, de →

    dea; 

Your goal is to perform several (maybe zero) operations so that s
becomes equal to t

. Please determine whether it is possible.

Note that you have to answer q
independent queries.