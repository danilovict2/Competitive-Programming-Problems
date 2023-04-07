n a stroke of luck almost beyond imagination, Farmer John was sent a ticket to the Irish Sweepstakes (really a lottery) for his birthday. This ticket turned out to have only the winning number for the lottery! Farmer John won a fabulous castle in the Irish countryside.

Bragging rights being what they are in Wisconsin, Farmer John wished to tell his cows all about the castle. He wanted to know how many rooms it has and how big the largest room was. In fact, he wants to take out a single wall to make an even bigger room.

Your task is to help Farmer John know the exact room count and sizes.

The castle floorplan is divided into M (wide) by N (1 <=M,N<=50) square modules. Each such module can have between zero and four walls. Castles always have walls on their "outer edges" to keep out the wind and rain.

Consider this annotated floorplan of a castle:

     1   2   3   4   5   6   7
   #############################
 1 #   |   #   |   #   |   |   #
   #####---#####---#---#####---#   
 2 #   #   |   #   #   #   #   #
   #---#####---#####---#####---#
 3 #   |   |   #   #   #   #   #   
   #---#########---#####---#---#
 4 # ->#   |   |   |   |   #   #   
   ############################# 

#  = Wall     -,|  = No wall
-> = Points to the wall to remove to
     make the largest possible new room

By way of example, this castle sits on a 7 x 4 base. A "room" includes any set of connected "squares" in the floor plan. This floorplan contains five rooms (whose sizes are 9, 7, 3, 1, and 8 in no particular order).

Removing the wall marked by the arrow merges a pair of rooms to make the largest possible room that can be made by removing a single wall.

The castle always has at least two rooms and always has a wall that can be removed. 