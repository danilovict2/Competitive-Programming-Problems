Nikolay lives in a two-storied house. There are n rooms on each floor, arranged in a row and numbered from one from left to right. So each room can be represented by the number of the floor and the number of the room on this floor (room number is an integer between 1 and n

).

If Nikolay is currently in some room, he can move to any of the neighbouring rooms (if they exist). Rooms with numbers i
and i+1 on each floor are neighbouring, for all 1≤i≤n−1. There may also be staircases that connect two rooms from different floors having the same numbers. If there is a staircase connecting the room x on the first floor and the room x

on the second floor, then Nikolay can use it to move from one room to another.
The picture illustrates a house with n=4
. There is a staircase between the room 2 on the first floor and the room 2 on the second floor, and another staircase between the room 4 on the first floor and the room 4
on the second floor. The arrows denote possible directions in which Nikolay can move. The picture corresponds to the string "0101" in the input.

Nikolay wants to move through some rooms in his house. To do this, he firstly chooses any room where he starts. Then Nikolay moves between rooms according to the aforementioned rules. Nikolay never visits the same room twice (he won't enter a room where he has already been).

Calculate the maximum number of rooms Nikolay can visit during his tour, if:

    he can start in any room on any floor of his choice,
    and he won't visit the same room twice. 