Today, Yasser and Adel are at the shop buying cupcakes. There are n cupcake types, arranged from 1 to n on the shelf, and there are infinitely many of each type. The tastiness of a cupcake of type i is an integer ai

. There are both tasty and nasty cupcakes, so the tastiness can be positive, zero or negative.

Yasser, of course, wants to try them all, so he will buy exactly one cupcake of each type.

On the other hand, Adel will choose some segment [l,r]
(1≤l≤r≤n) that does not include all of cupcakes (he can't choose [l,r]=[1,n]) and buy exactly one cupcake of each of types l,l+1,…,r

.

After that they will compare the total tastiness of the cupcakes each of them have bought. Yasser will be happy if the total tastiness of cupcakes he buys is strictly greater than the total tastiness of cupcakes Adel buys regardless of Adel's choice.

For example, let the tastinesses of the cupcakes be [7,4,−1]
. Yasser will buy all of them, the total tastiness will be 7+4−1=10. Adel can choose segments [7],[4],[−1],[7,4] or [4,−1], their total tastinesses are 7,4,−1,11 and 3, respectively. Adel can choose segment with tastiness 11, and as 10 is not strictly greater than 11

, Yasser won't be happy :(

Find out if Yasser will be happy after visiting the shop.