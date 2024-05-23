\begin{problem}{The Goalkeeper's Challenge}{standard input}{standard output}{1 second}{256 megabytes}

The best strikers in the world have challenged the best goalkeepers to a penalty kick duel. Suppose a certain player's rating is $PR_i$ and the goalkeeper's rating is $GR_i$. The expectation to score for the $i$-th player against the $i$-th goalkeeper is defined as:$$E_i = \frac{PR_i}{GR_i}$$

If $$E_i \geq 1$$, then the player scores; otherwise, he does not, and the goalkeeper makes the save.

You are given an array of numbers denoting the player ratings $PR$  and another array denoting the goalkeeper ratings $GR$. The $i$-th player goes against the $i$-th goalkeeper. Our goal is to maximize the number of goals scored by arranging the players and goalkeepers optimally.


\InputFile
The first line contains a single integer $t$ $(1 \leq t \leq 100)$ --- the number of test cases.

The first line of each test case contains a single integer $n$ $(1 \leq n \leq 10^4)$ --- the number of players and goalkeepers.

The second line of each test case contains $n$ integers $PR_1, PR_2, \ldots, PR_n$ $(1 \leq PR_i \leq 500)$ --- the elements of $PR$.

The third line of each test case contains $n$ integers $GR_1, GR_2, \ldots, GR_n$ $(1 \leq GR_i \leq 500)$ --- the elements of $GR$.

\OutputFile
For each test case output the maximum number of goals that can be scored by the players


\Note
For Example if

PR=[4,5,9,8]

GR=[1,5,9,10]

then the arrays could be arranged in the following manner 

PR=[9,8,5,4]
GR=[9,5,1,10]

so the first three players can score i.e. the maximum number of goals is 3

\end{problem}

