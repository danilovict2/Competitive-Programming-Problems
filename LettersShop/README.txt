output
standard output

The letters shop showcase is a string s
, consisting of n

lowercase Latin letters. As the name tells, letters are sold in the shop.

Letters are sold one by one from the leftmost to the rightmost. Any customer can only buy some prefix of letters from the string s

.

There are m
friends, the i-th of them is named ti

. Each of them is planning to estimate the following value: how many letters (the length of the shortest prefix) would s/he need to buy if s/he wanted to construct her/his name of bought letters. The name can be constructed if each letter is presented in the equal or greater amount.

    For example, for s

="arrayhead" and ti="arya" 5
letters have to be bought ("arrayhead").
For example, for s
="arrayhead" and ti="harry" 6
letters have to be bought ("arrayhead").
For example, for s
="arrayhead" and ti="ray" 5
letters have to be bought ("arrayhead").
For example, for s
="arrayhead" and ti="r" 2
letters have to be bought ("arrayhead").
For example, for s
="arrayhead" and ti="areahydra" all 9

    letters have to be bought ("arrayhead"). 

It is guaranteed that every friend can construct her/his name using the letters from the string s

.

Note that the values for friends are independent, friends are only estimating them but not actually buying the letters.