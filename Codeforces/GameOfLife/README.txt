William really likes the cellular automaton called "Game of Life" so he decided to make his own version. For simplicity, William decided to define his cellular automaton on an array containing n

cells, with each cell either being alive or dead.

Evolution of the array in William's cellular automaton occurs iteratively in the following way:

    If the element is dead and it has exactly 1

alive neighbor in the current state of the array, then on the next iteration it will become alive. For an element at index i the neighbors would be elements with indices i−1 and i+1

    . If there is no element at that index, it is considered to be a dead neighbor.
    William is a humane person so all alive elements stay alive. 

Check the note section for examples of the evolution.

You are given some initial state of all elements and you need to help William find the state of the array after m
iterations of evolution.