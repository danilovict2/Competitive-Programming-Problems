The USA Construction Operation (USACO) recently ordered Farmer John to arrange a row of n haybale piles on the farm. The i-th pile contains ai

haybales.

However, Farmer John has just left for vacation, leaving Bessie all on her own. Every day, Bessie the naughty cow can choose to move one haybale in any pile to an adjacent pile. Formally, in one day she can choose any two indices i
and j (1≤i,j≤n) such that |i−j|=1 and ai>0 and apply ai=ai−1, aj=aj+1

. She may also decide to not do anything on some days because she is lazy.

Bessie wants to maximize the number of haybales in pile 1
(i.e. to maximize a1), and she only has d days to do so before Farmer John returns. Help her find the maximum number of haybales that may be in pile 1 if she acts optimally!