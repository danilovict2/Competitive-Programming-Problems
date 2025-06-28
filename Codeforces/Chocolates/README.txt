You went to the store, selling n types of chocolates. There are ai chocolates of type i

in stock.

You have unlimited amount of cash (so you are not restricted by any prices) and want to buy as many chocolates as possible. However if you buy xi
chocolates of type i (clearly, 0≤xi≤ai), then for all 1≤j<i

at least one of the following must hold:

    xj=0

(you bought zero chocolates of type j
)
xj<xi
(you bought less chocolates of type j than of type i

    ) 

For example, the array x=[0,0,1,2,10]
satisfies the requirement above (assuming that all ai≥xi), while arrays x=[0,1,0], x=[5,5] and x=[3,2]

don't.

Calculate the maximum number of chocolates you can buy.