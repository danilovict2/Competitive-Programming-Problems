Mualani loves surfing on her sharky surfboard!

Mualani's surf path can be modeled by a number line. She starts at position 1
, and the path ends at position L. When she is at position x with a jump power of k, she can jump to any integer position in the interval [x,x+k]. Initially, her jump power is 1

.

However, her surf path isn't completely smooth. There are n
hurdles on her path. Each hurdle is represented by an interval [l,r], meaning she cannot jump to any position in the interval [l,r]

.

There are also m
power-ups at certain positions on the path. Power-up i is located at position xi and has a value of vi. When Mualani is at position xi, she has the option to collect the power-up to increase her jump power by vi

. There may be multiple power-ups at the same position. When she is at a position with some power-ups, she may choose to take or ignore each individual power-up. No power-up is in the interval of any hurdle.

What is the minimum number of power-ups she must collect to reach position L
to finish the path? If it is not possible to finish the surf path, output −1.