#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
      ios::sync_with_stdio(0);
     cin.tie(0);
     ll n,q;
     cin>>n>>q;
     ll a[n];

     for(ll i=0; i<n; i++)
     cin>>a[i];
     for(ll i=1;i<n; i++ )
     a[i] = a[i-1]+a[i];
     while(q--){
          ll m,days=0 ;
          cin >>m;
          ll low = 0;
          ll high = n-1;
          
          while(low<=high){
           ll mid = (low + high)/2;
            if(a[mid] >= m){
                 high = mid-1;
                 days = mid+1;
            }else low = mid+1;
          }
          cout << days <<'\n';

     }         
     return 0;
}