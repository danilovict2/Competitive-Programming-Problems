output
standard output

There is a field divided into n
rows and m

columns. Some cells are empty (denoted as E), other cells contain robots (denoted as R).

You can send a command to all robots at the same time. The command can be of one of the four types:

    move up;
    move right;
    move down;
    move left. 

When you send a command, all robots at the same time attempt to take one step in the direction you picked. If a robot tries to move outside the field, it explodes; otherwise, every robot moves to an adjacent cell in the chosen direction.

You can send as many commands as you want (possibly, zero), in any order. Your goal is to make at least one robot reach the upper left corner of the field. Can you do this without forcing any of the robots to explode?