#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     
     ll t; cin>>t;
     while(t--){
          ll a1=0,a2=0,a3=0;
          ll n,m; cin>>n>>m;
          ll a[n],b[m],c[n-m]={0};
          for(ll i=0; i<m; i++)
          cin>>b[i];
          for(ll i=0; i<n; i++){
            a1++;
            a[i] = a1;
          }
          sort(b,b+m);
          for(ll i=0; i<n; i++){
               if(a[i]==b[a3]){ a3++; continue;}
               else c[a2] = a[i];
               a2++;
          }
          for(ll i=0; i<n-m; i++){
               if(i%2==0) cout<<c[i]<<' ';
          }cout <<'\n';
           for(ll i=0; i<n-m; i++){
               if(i%2) cout<<c[i]<<' ';
          }cout <<'\n';
          
     }
     return 0;
}