#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
     
     ios::sync_with_stdio(0);
     cin.tie(0);

     ll n; cin >> n;
     ll a[n+1];
      for(ll i=1; i<=n; i++){
       cin >> a[i];
      }
      ll l,r;
      cin >> l >> r;
     for(ll i=l; i<=r; i++){
       cout << a[i] <<" "; 
      }
      cout <<'\n';
   return 0;
}