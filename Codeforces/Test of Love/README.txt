ErnKor is ready to do anything for Julen, even to swim through crocodile-infested swamps. We decided to test this love. ErnKor will have to swim across a river with a width of 1 meter and a length of n

meters.

The river is very cold. Therefore, in total (that is, throughout the entire swim from 0
to n+1) ErnKor can swim in the water for no more than k

meters. For the sake of humanity, we have added not only crocodiles to the river, but also logs on which he can jump. Our test is as follows:

Initially, ErnKor is on the left bank and needs to reach the right bank. They are located at the 0
and n+1 meters respectively. The river can be represented as n segments, each with a length of 1

meter. Each segment contains either a log 'L', a crocodile 'C', or just water 'W'. ErnKor can move as follows:

    If he is on the surface (i.e., on the bank or on a log), he can jump forward for no more than m

(1≤m≤10
) meters (he can jump on the bank, on a log, or in the water).
If he is in the water, he can only swim to the next river segment (or to the bank if he is at the n

    -th meter).
    ErnKor cannot land in a segment with a crocodile in any way. 

Determine if ErnKor can reach the right bank.