#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define xx first
#define yy second
typedef long long ll;
int main(){
     ll n,m;
     cin>>n>>m;
     vector<pair<ll,ll>>a(n);
     for(ll i=0; i<n; i++) {
          cin>>a[i].xx;
          a[i].yy=i;
     }
     vector<pair<ll,ll>>b(m);
     for(ll j=0; j<m; j++) {
          cin>>b[j].xx;
          b[j].yy=j;
     }
     sort(a.begin(),a.end());
     sort(b.begin(),b.end());
     for(ll j=0; j<m; j++) {
         cout<<a[0].yy<<" "<<b[j].yy<<endl;
     }
     for(ll i=1; i<n; i++) {
         cout<<a[i].yy<<" "<<b[m-1].yy<<endl;
     }
     return 0;
}