There is a bookshelf which can fit n books. The i-th position of bookshelf is ai=1 if there is a book on this position and ai=0

otherwise. It is guaranteed that there is at least one book on the bookshelf.

In one move, you can choose some contiguous segment [l;r]
consisting of books (i.e. for each i from l to r the condition ai=1

holds) and:

    Shift it to the right by 1

: move the book at index i to i+1 for all l≤i≤r. This move can be done only if r+1≤n and there is no book at the position r+1
.
Shift it to the left by 1
: move the book at index i to i−1 for all l≤i≤r. This move can be done only if l−1≥1 and there is no book at the position l−1

    . 

Your task is to find the minimum number of moves required to collect all the books on the shelf as a contiguous (consecutive) segment (i.e. the segment without any gaps).

For example, for a=[0,0,1,0,1]
there is a gap between books (a4=0 when a3=1 and a5=1), for a=[1,1,0] there are no gaps between books and for a=[0,0,0]

there are also no gaps between books.

You have to answer t

independent test cases.
