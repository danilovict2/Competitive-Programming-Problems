(This poorly named task has nothing to do with prime numbers or even, really, prime digits. Sorry 'bout that.)

A cryptarithm is usually presented as a pencil-and-paper task in which the solver is required to substitute a digit for each of the asterisks (or, often, letters) in the manual evaluation of an arithmetic term or expression so that the consistent application of the digits results in a proper expression. A classic example is this cryptarithm, shown with its unique solution:

    SEND            9567       S->9  E->5  N->6  D->7
  + MORE          + 1085       M->1  O->0  R->8
  -------        -------
   MONEY           10652       Y->2

The following cryptarithm is a multiplication problem that can be solved by substituting digits from a specified set of N digits into the positions marked with *. Since the asterisks are generic, any digit from the input set can be used for any of the asterisks; any digit may be duplicated as many times as desired.

Consider using the set {2,3,5,7} for the cryptarithm below:

      * * *
   x    * *
    -------
      * * *         <-- partial product 1 -- MUST BE 3 DIGITS LONG
    * * *           <-- partial product 2 -- MUST BE 3 DIGITS LONG
    -------
    * * * *

Digits can appear only in places marked by `*'. Of course, leading zeroes are not allowed.

The partial products must be three digits long, even though the general case (see below) might have four digit partial products.

********** Note About Cryptarithm's Multiplication ************
In USA, children are taught to perform multidigit multiplication as described here. Consider multiplying a three digit number whose digits are 'a', 'b', and 'c' by a two digit number whose digits are 'd' and 'e':

[Note that this diagram shows far more digits in its results than
the required diagram above which has three digit partial products.]

          a b c     <-- number 'abc'
        x   d e     <-- number 'de'; the 'x' means 'multiply'
     -----------
p1      * * * *     <-- product of e * abc; first star might be 0 (absent)
p2    * * * *       <-- product of d * abc; first star might be 0 (absent)
     -----------
      * * * * *     <-- sum of p1 and p2 (e*abc + 10*d*abc) == de*abc

Note that the 'partial products' are as taught in USA schools. The first partial product is the product of the final digit of the second number and the top number. The second partial product is the product of the first digit of the second number and the top number.

Write a program that will find all solutions to the first cryptarithm above (with three digit partial-products) for any subset of supplied non-zero single-digits. Note that the multiplicands, partial products, and answers must all conform to the cryptarithm's framework. 