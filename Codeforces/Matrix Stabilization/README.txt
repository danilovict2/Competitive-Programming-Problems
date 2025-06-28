You are given a matrix of size n×m, where the rows are numbered from 1 to n from top to bottom, and the columns are numbered from 1 to m from left to right. The element at the intersection of the i-th row and the j-th column is denoted by aij

.

Consider the algorithm for stabilizing matrix a

:

    Find the cell (i,j)

such that its value is strictly greater than the values of all its neighboring cells. If there is no such cell, terminate the algorithm. If there are multiple such cells, choose the cell with the smallest value of i, and if there are still multiple cells, choose the one with the smallest value of j
.
Set aij=aij−1
.
Go to step 1

    . 

In this problem, cells (a,b)
and (c,d) are considered neighbors if they share a common side, i.e., |a−c|+|b−d|=1

.

Your task is to output the matrix a
after the stabilization algorithm has been executed. It can be shown that this algorithm cannot run for an infinite number of iterations.