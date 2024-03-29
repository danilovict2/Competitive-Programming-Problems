You are given a bracket sequence consisting of n

characters '(' and/or )'. You perform several operations with it.

During one operation, you choose the shortest prefix of this string (some amount of first characters of the string) that is good and remove it from the string.

The prefix is considered good if one of the following two conditions is satisfied:

    this prefix is a regular bracket sequence;
    this prefix is a palindrome of length at least two. 

A bracket sequence is called regular if it is possible to obtain a correct arithmetic expression by inserting characters '+' and '1' into this sequence. For example, sequences (())(), () and (()(())) are regular, while )(, (() and (()))( are not.

The bracket sequence is called palindrome if it reads the same back and forth. For example, the bracket sequences )), (( and )(() are palindromes, while bracket sequences (), )( and ))( are not palindromes.

You stop performing the operations when it's not possible to find a good prefix. Your task is to find the number of operations you will perform on the given string and the number of remaining characters in the string.

You have to answer t
independent test cases.