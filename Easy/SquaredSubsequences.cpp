#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef  long long ll;
int main(){
     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     ll t; cin>>t;
     while(t--){
        ll n,i; cin>>n;
        ll a[n+1];
        for(ll i=0; i<n; i++) cin>>a[i];
        ll sum = 0;
        ll preIndex = 0;
        ll preAns = 0;
        for(i=0;i<n;i++){
             if(a[i]%4==0){
                  preIndex = i+1;
                  preAns = i+1;
                  sum += i+1;
             }

             if(a[i]%2==0){
                  sum += preIndex;
                  preAns = preIndex;
                  preIndex = i+1;
             }else{
                  sum += (preAns + i+1-preIndex) ;
             }
        }
        cout<<sum<<endl;
     }
     return 0;
}