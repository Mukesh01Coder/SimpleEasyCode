#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
#define PB push_back
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     ll t; cin>>t;
     while(t--){
          ll n,total = 0;
          cin>>n;
          vector<vector<ll>> a;
          vector<ll>b(n);

          for(ll i=0; i<n; i++){
               cin>>b[i];
               total+=b[i];
               vector<ll>temp(b[i]);
               for(ll j=0; j<b[i]; j++)
               cin>>temp[j];
               a.PB(temp);
          }
          vector<ll>ar(total);
          for(ll i=total-1; i>=0; i--)
               cin>>ar[i];
           ll x = 0,y;
           ll an = 0;
           for(ll i=0; i<n; i++){
             x=0;
             y=b[i];
             for(ll j=0; j<total; j++){
                  if(x==y) break;
                  if(a[i][x] == ar[j]){
                       x++;
                  }
             }
             if(x < y){
                  an = 1;
                  break;
             }
           }     
           if(an == 1) cout<< "NO" <<"\n";
           else cout<< "YES" <<"\n";
          
     }
     return 0;
}