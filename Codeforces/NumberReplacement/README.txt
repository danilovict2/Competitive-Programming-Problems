An integer array a1,a2,…,an

is being transformed into an array of lowercase English letters using the following prodecure:

While there is at least one number in the array:

    Choose any number x

from the array a, and any letter of the English alphabet y
.
Replace all occurrences of number x
with the letter y

    . 

For example, if we initially had an array a=[2,3,2,4,1]

, then we could transform it the following way:

    Choose the number 2

and the letter c. After that a=[c,3,c,4,1]
.
Choose the number 3
and the letter a. After that a=[c,a,c,4,1]
.
Choose the number 4
and the letter t. After that a=[c,a,c,t,1]
.
Choose the number 1
and the letter a. After that a=[c,a,c,t,a]

    . 

After the transformation all letters are united into a string, in our example we get the string "cacta".

Having the array a
and the string s determine if the string s could be got from the array a after the described transformation?