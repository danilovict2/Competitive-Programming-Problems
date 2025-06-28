The store sells n types of candies with numbers from 1 to n. One candy of type i costs bi coins. In total, there are ai candies of type i

in the store.

You need to pack all available candies in packs, each pack should contain only one type of candies. Formally, for each type of candy i
you need to choose the integer di, denoting the number of type i candies in one pack, so that ai is divided without remainder by di

.

Then the cost of one pack of candies of type i
will be equal to bi⋅di. Let's denote this cost by ci, that is, ci=bi⋅di

.

After packaging, packs will be placed on the shelf. Consider the cost of the packs placed on the shelf, in order c1,c2,…,cn
. Price tags will be used to describe costs of the packs. One price tag can describe the cost of all packs from l to r inclusive if cl=cl+1=…=cr. Each of the packs from 1 to n must be described by at least one price tag. For example, if c1,…,cn=[4,4,2,4,4], to describe all the packs, a 3 price tags will be enough, the first price tag describes the packs 1,2, the second: 3, the third: 4,5

.

You are given the integers a1,b1,a2,b2,…,an,bn
. Your task is to choose integers di so that ai is divisible by di for all i, and the required number of price tags to describe the values of c1,c2,…,cn is the minimum possible.