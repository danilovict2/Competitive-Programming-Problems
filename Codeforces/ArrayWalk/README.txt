You are given an array a1,a2,…,an, consisting of n

positive integers.

Initially you are standing at index 1
and have a score equal to a1

. You can perform two kinds of moves:

    move right — go from your current index x

to x+1 and add ax+1 to your score. This move can only be performed if x<n
.
move left — go from your current index x
to x−1 and add ax−1 to your score. This move can only be performed if x>1

    . Also, you can't perform two or more moves to the left in a row. 

You want to perform exactly k
moves. Also, there should be no more than z

moves to the left among them.

What is the maximum score you can achieve?