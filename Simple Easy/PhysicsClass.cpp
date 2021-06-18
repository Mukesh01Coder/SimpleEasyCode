#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#include <map>
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     ll t; cin >> t ;
     while(t--){
          ll n,f;
          cin >>n>>f;
          ll height[n];
          map<ll, ll> mp;
          for(ll i=0; i<n; i++){
              cin >> height[i];
              while (height[i]%f == 0)
                   height[i]/=f; mp[height[i]]++;
              
          }
          ll ways = 0;
          for(auto it:mp){
               ll sec = it.second;
               ways+=(sec*(sec-1))/2;
          }
          cout<<ways<<'\n';
     }
     return 0;
}