#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;

void solve(){
      ll n,m,count=0; cin>>n>>m;
      vector<ll>v(n+1,1);
      for(ll i=2;i<=n;i++){
           ll a = m%i;
           count += v[a];
           for(ll j=a;j<=n;j+=i) {
                v[j]++;
           }
      }
      cout<<count<<endl;
}

int main(){
     ios::sync_with_stdio(0);
     cin.tie(0); cout.tie(0);

     ll t; cin >>t;
     while(t--){
              solve();            
     }
     return 0;
}