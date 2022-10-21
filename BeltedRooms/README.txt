In the snake exhibition, there are n rooms (numbered 0 to n−1) arranged in a circle, with a snake in each room. The rooms are connected by n conveyor belts, and the i-th conveyor belt connects the rooms i and (i+1)modn. In the other words, rooms 0 and 1, 1 and 2, …, n−2 and n−1, n−1 and 0

are connected with conveyor belts.

The i

-th conveyor belt is in one of three states:

    If it is clockwise, snakes can only go from room i

to (i+1)modn
.
If it is anticlockwise, snakes can only go from room (i+1)modn
to i

    .
    If it is off, snakes can travel in either direction. 

Above is an example with 4
rooms, where belts 0 and 3 are off, 1 is clockwise, and 2

is anticlockwise.

Each snake wants to leave its room and come back to it later. A room is returnable if the snake there can leave the room, and later come back to it using the conveyor belts. How many such returnable rooms are there?