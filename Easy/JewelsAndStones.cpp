#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0); cout.tie(0);

     ll t; cin>>t;
     while(t--){
          string a,b;
          cin>>a>>b;
          ll count = 0;
          for(ll i=0; i<b.size();i++){
               for(ll j=0;j<a.size();j++){
                    if(a[j]==b[i]) {
                         count++;
                         break;
                    }
               }
          }
          cout <<count<<'\n';
     }
     return 0;
}