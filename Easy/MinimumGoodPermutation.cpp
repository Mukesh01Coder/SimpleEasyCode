#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long int ll;
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0); cout.tie(0);

     ll t; cin>>t;
     while(t--){
      ll n; cin>>n;
           ll a[n];
          if(n%2==0){
               for(ll i=1; i<=n; i++){
                    if(i%2 !=0 ) a[i]=i+1;
                    else a[i]=i-1;      
               }         
          }else{
                 for(ll i=1; i<=n; i++){
                    if(i%2 !=0 ) {
                         if(i==n) a[i]=n-2;
                         else a[i]=i+1;
                    }else if(i==n-1) a[i] = n;
                          else  a[i]=i-1;      
               }   
          }
          for(ll i=1; i<=n; i++)
                      cout<<a[i]<<" ";
                      cout<<endl;
     }     
     return 0;
}