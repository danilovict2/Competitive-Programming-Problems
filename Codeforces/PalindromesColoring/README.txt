You have a string s

consisting of lowercase Latin alphabet letters.

You can color some letters in colors from 1
to k

. It is not necessary to paint all the letters. But for each color, there must be a letter painted in that color.

Then you can swap any two symbols painted in the same color as many times as you want.

After that, k
strings will be created, i-th of them will contain all the characters colored in the color i, written in the order of their sequence in the string s

.

Your task is to color the characters of the string so that all the resulting k
strings are palindromes, and the length of the shortest of these k

strings is as large as possible.

Read the note for the first test case of the example if you need a clarification.

Recall that a string is a palindrome if it reads the same way both from left to right and from right to left. For example, the strings abacaba, cccc, z and dxd are palindromes, but the strings abab and aaabaa — are not.