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