Fox Ciel is playing a mobile puzzle game called "Two Dots". The basic levels are played on a board of size n × m cells, like this:

Each cell contains a dot that has some color. We will use different uppercase Latin characters to express different colors.

The key of this game is to find a cycle that contain dots of same color. Consider 4 blue dots on the picture forming a circle as an example. Formally, we call a sequence of dots d1, d2, ..., dk a cycle if and only if it meets the following condition:

    These k dots are different: if i ≠ j then di is different from dj.
    k is at least 4.
    All dots belong to the same color.
    For all 1 ≤ i ≤ k - 1: di and di + 1 are adjacent. Also, dk and d1 should also be adjacent. Cells x and y are called adjacent if they share an edge. 

Determine if there exists a cycle on the field.