#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int gcd(ll a, ll b){
     //Euclidean Algorithm for gcd()
     if(a==0) return b;
     if(b==0) return a;
     if(a>b) return gcd(b,a%b);
     else return gcd(a,b%a);
}
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);

     ll t; cin>>t;
     while(t--){
          ll n; cin>>n;
          ll a[n];
          ll ans;
          for(ll i=0; i<n; i++)
              cin>>a[i];
           ans = gcd(a[0],a[1]);   
          for(ll i=2; i<n; i++){
              ans = gcd(ans,a[i]);
          }
          for(ll i=0; i<n; i++)
              cout<< a[i]/ans <<' ';
              cout <<'\n';
     }
     return 0;
}