Each evening after the dinner the SIS's students gather together to play the game of Sport Mafia.

For the tournament, Alya puts candies into the box, which will serve as a prize for a winner. To do that, she performs n

actions. The first action performed is to put a single candy into the box. For each of the remaining moves she can choose from two options:

    the first option, in case the box contains at least one candy, is to take exactly one candy out and eat it. This way the number of candies in the box decreased by 1

;
the second option is to put candies in the box. In this case, Alya will put 1

    more candy, than she put in the previous time. 

Thus, if the box is empty, then it can only use the second option.

For example, one possible sequence of Alya's actions look as follows:

    put one candy into the box;
    put two candies into the box;
    eat one candy from the box;
    eat one candy from the box;
    put three candies into the box;
    eat one candy from the box;
    put four candies into the box;
    eat one candy from the box;
    put five candies into the box; 

This way she will perform 9
actions, the number of candies at the end will be 11, while Alya will eat 4

candies in total.

You know the total number of actions n
and the number of candies at the end k. You need to find the total number of sweets Alya ate. That is the number of moves of the first option. It's guaranteed, that for the given n and k

the answer always exists.

Please note, that during an action of the first option, Alya takes out and eats exactly one candy.