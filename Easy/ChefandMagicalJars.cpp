#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;

int main(){
     ios::sync_with_stdio(false);
     cin.tie(NULL); cout.tie(NULL);

     ll t; cin>>t;
     while(t--){
      ll n; cin>>n;
      ll a[n];
      ll sum=0;
      for(ll i=0; i<n; i++) {cin>>a[i]; sum += a[i];}
       cout<<sum-n+1<<endl;
     }
     return 0;
}