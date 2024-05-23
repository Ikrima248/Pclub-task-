The problem involves a penalty kick duel between players and goalkeepers, where each player $PR_i$ goes up against a goalkeeper $GR_i$. The task is to maximize the number of goals scored by optimally arranging the players and goalkeepers. The expectation to score $E_i$ for the $i$-th player against the $i$-th goalkeeper is given by:
$E_i = \frac{PR_i}{GR_i} $

If $E_i \geq 1$, the player scores a goal. Otherwise, the goalkeeper saves it. Our task is to determine the maximum number of goals that can be scored by optimally putting players and goalkeepers against each other.
 

\textbf{Detailed Algorithm}

    \textbf{Input Reading}:

        Read the number of test cases.

        For each test case, read the number of players and the arrays $PR$ and $GR$.
      
      

\textbf{Sorting}:
        Sort both the arrays in descending order .

\textbf{Greedy Approach}:

Initialize two variables for traversal in arrays, one for $PR$ (starting from the beginning) and one for $GR$ ( also starting from the beginning).Traverse through both arrays,If $PR[i] \geq GR[j]$, it means the player can score against the goalkeeper. Increment both pointers and the goal count.If $PR[i] < GR[j]$, it means the player cannot score. Increment only the goalkeeper pointer to check with the next goalkeeper.

\bf{Output the Results:}
    
Print the maximum number of goals for each test cases.

\bf{Complexity Analysis:}

      Sorting: Sorting both arrays takes $O(n \log n)$.
       
      Two-Pointer Traversal: Traversing the arrays takes $O(n)$.

Thus, the overall complexity per test case is $O(n \log n)$, which is efficient for $n \leq 10^4$.

\bf{Example Walkthrough:}

Consider the example:
Input:
1
4
4 5 9 8
1 5 9 10

    Sorted $PR$: [9, 8, 5, 4]
    Sorted $GR$: [10, 9, 5, 1]


Using the two-pointer technique:
    9 vs 10: Player doesn't score, pointers move to (9, 9)

    9 vs 5: Player scores, pointers move to (8, 5)

    8 vs 5: Player scores, pointers move to (5,1)

    5 vs 1: Player scores and we have traversed completely through the goalkeeper array 


Maximum goals scored: 3

\bf{Implementation:}

Here's the C++ code to solve the problem:
\begin{lstlisting}



#include <bits/stdc++.h>
using namespace std;
#define long long int; 
int main(){
    int t; 
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int PR[n];
        int GR[n];
        for(int i=0;i<n;i++){
            cin>>PR[i] ;
        }
        for(int i=0;i<n;i++){
            cin>>GR[i];
        }
        sort(PR, PR+n, greater<int>());
        sort(GR, GR+n, greater<int>());
        int j=0;
        int goals=0;
        for(int k=0;k<n;k++){
              if(PR[j]>=GR[k]){
                  goals++;
                  j++;
                }
          }   
     cout<<goals<<endl;
    
    }
    return 0;
}
\end{lstlisting}
This code reads multiple test cases, sorts the player and goalkeeper ratings accordingly, and uses the algorithm defined above to count the maximum number of goals scored. Each result is then printed for each test case.