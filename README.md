Is lotto(lottery) a fraud?

In 1019th lotto 6/45 (korean lottery), 50 people won the first prize.
after broadcasting, many people raise a question about fairness of lottoery.
so I want to 'test' as to whether it can happen in reality.

However, In order to verify this project, it needs innumerable amount of computation.
(
computation = (lotto people)x(1019 round)x(simulation count),
p = over than 100Million
round = 1019
simulation = at least 30
and this calculation is 'MINIMUM' count.
)

so, Honestly, I use 'trick' in program. :(
In binomial distribution,
p = 100Mil and m = 12.3 (12.3 = 1Mil x (probability of 1st prize = 1/8Mil))
is similar situation to
p = 1Mil and (probability of 1st prize) = 1/80000

and result is.. It can't happen. :(
Simulation performs around 1000 times, but nothing happens.

[Mistake]
#1 if people purchase lotto manually, lotto numberes (which people buy) are not follow Normal Distribution.
#2 this project's result represents some implicit meaning. manual loto is not follow Normal Distribution.
   if MANUAL purcharser followes N.D. , probability of '50 winners in specific round' is out of 10 sigma..
   p.s. 6 sigma = 0.002%

[Lastly..]
This project is wrong completely.. if i try to determine project, I must consider other ways..

so I need other method to calculate likelihood.
(maybe it useful to change viewpoint '50 winners in specific round' -> 'It can happen 50 people choose equal lottery numbers?')
I need to mathmatical knowledge and other libraries. (Coding about Probabiliy Density Funtion.. etc.)
