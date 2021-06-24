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
       if(n==1) cout<< "1" <<endl;
       else if((n&(n-1))==0) cout<<"-1"<<endl;
             else{
                    ll a[n]={2,3,1};
                   for(ll i=3;i<n;i++)
                       a[i] = i+1; 
                    for(ll i=3;i<n;i++){
                       if((a[i]&a[i-1]) == 0)
                       swap(a[i],a[i+1]); 
                    }
                    for(ll i=0; i<n;i++)
                    cout<<a[i]<<" "; 
                    cout << endl;
               }
              
     }
     return 0;
}