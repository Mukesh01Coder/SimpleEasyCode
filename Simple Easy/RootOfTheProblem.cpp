#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
     ll t; cin>>t;
     while(t--){
      ll n;
      cin>>n;
      ll a[n],c[n];
      ll sum = 0;
      for(ll i=0; i<n; i++){
         cin >> a[i] >> c[i];
         sum = sum + a[i] - c[i];
      }
      cout << sum <<'\n';
     }
     return 0;
}