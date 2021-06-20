#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
     ll t; cin>>t;
     while(t--){
          ll ts; cin>>ts;
          
               while((ts%2 == 0)) 
                    ts/=2;
               
          
          cout<< (ts-1)/2 <<'\n';
     } 
     return 0;
}