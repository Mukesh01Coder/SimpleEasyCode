#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0); cout.tie(0);

     ll t; cin>>t;
     while(t--){
      ll n; cin>>n;
      ll arr[n]; for(ll i=0;i<n;i++) cin>>arr[i];
      ll count = 0;;
      for(ll j=0; j<n;j++) count+=j;
      cout<<count<<endl;
     }
     return 0;
}