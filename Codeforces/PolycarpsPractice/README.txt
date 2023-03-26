Polycarp is practicing his problem solving skill. He has a list of n
problems with difficulties a1,a2,…,an, respectively. His plan is to practice for exactly k days. Each day he has to solve at least one problem from his list. Polycarp solves the problems in the order they are given in his list, he cannot skip any problem from his list. He has to solve all n problems in exactly k

days.

Thus, each day Polycarp solves a contiguous sequence of (consecutive) problems from the start of the list. He can't skip problems or solve them multiple times. As a result, in k
days he will solve all the n

problems.

The profit of the j
-th day of Polycarp's practice is the maximum among all the difficulties of problems Polycarp solves during the j-th day (i.e. if he solves problems with indices from l to r during a day, then the profit of the day is maxl≤i≤rai). The total profit of his practice is the sum of the profits over all k

days of his practice.

You want to help Polycarp to get the maximum possible total profit over all valid ways to solve problems. Your task is to distribute all n
problems between k

days satisfying the conditions above in such a way, that the total profit is maximum.

For example, if n=8,k=3
and a=[5,4,2,6,5,1,9,2], one of the possible distributions with maximum total profit is: [5,4,2],[6,5],[1,9,2]. Here the total profit equals 5+6+9=20.