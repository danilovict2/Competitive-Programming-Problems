Farmer John is attempting to sort his N cows (1≤N≤100), conveniently numbered 1…N, before they head out to the pastures for breakfast.

Currently, the cows are standing in a line in the order p1,p2,p3,…,pN
, and Farmer John is standing in front of cow p1. He wants to reorder the cows so that they are in the order 1,2,3,…,N, with cow 1

next to Farmer John.

The cows are a bit sleepy today, so at any point in time the only cow who is paying attention to Farmer John's instructions is the cow directly facing Farmer John. In one time step, he can instruct this cow to move k
paces down the line, for any k in the range 1…N−1. The k

cows whom she passes will amble forward, making room for her to insert herself in the line after them.

For example, suppose that N=4

and the cows start off in the following order:

 FJ: 4, 3, 2, 1 

The only cow paying attention to FJ is cow 4
. If he instructs her to move 2

paces down the line, the order will subsequently look like this:

 FJ: 3, 2, 4, 1 

Now the only cow paying attention to FJ is cow 3
, so in the second time step he may give cow 3

an instruction, and so forth until the cows are sorted.

Farmer John is eager to complete the sorting, so he can go back to the farmhouse for his own breakfast. Help him find the minimum number of time steps required to sort the cows. 