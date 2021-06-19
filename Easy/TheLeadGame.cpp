#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
     ll n; cin>>n;
     ll play1=0,play2=0, max_lead=0,win=0,sum_play1=0,sum_play2=0;
     while(n--){
          
          cin>>play1>>play2;
          sum_play1 += play1;
          sum_play2 += play2;
          if(abs(sum_play1-sum_play2)>max_lead){
            max_lead = abs(sum_play1-sum_play2);
               if(sum_play1>sum_play2)
                 win=1;
               else
                 win = 2;
          }  
     }
     cout << win << " " << max_lead <<'\n';
     return 0;
}