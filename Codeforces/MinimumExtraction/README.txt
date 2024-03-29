Yelisey has an array a of n

integers.

If a
has length strictly greater than 1

, then Yelisei can apply an operation called minimum extraction to it:

    First, Yelisei finds the minimal number m

in the array. If there are several identical minima, Yelisey can choose any of them.
Then the selected minimal element is removed from the array. After that, m

    is subtracted from each remaining element. 

Thus, after each operation, the length of the array is reduced by 1

.

For example, if a=[1,6,−4,−2,−4]
, then the minimum element in it is a3=−4, which means that after this operation the array will be equal to a=[1−(−4),6−(−4),−2−(−4),−4−(−4)]=[5,10,2,0]

.

Since Yelisey likes big numbers, he wants the numbers in the array a

to be as big as possible.

Formally speaking, he wants to make the minimum of the numbers in array a
to be maximal possible (i.e. he want to maximize a minimum). To do this, Yelisey can apply the minimum extraction operation to the array as many times as he wants (possibly, zero). Note that the operation cannot be applied to an array of length 1

.

Help him find what maximal value can the minimal element of the array have after applying several (possibly, zero) minimum extraction operations to the array.