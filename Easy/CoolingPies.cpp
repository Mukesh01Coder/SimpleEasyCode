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
          ll a[n]; for(ll i=0; i<n; i++) cin>>a[i];
          ll b[n];  for(ll i=0; i<n; i++) cin>>b[i];
          sort(a,a+n); sort(b,b+n);
          ll j=0;
          ll count = 1;
          for(ll i=0; i<n;i++){
               if(b[i]>=a[j]){
                    j++;    
               }

          }
       cout<<j<<endl;
     }
     return 0;
}