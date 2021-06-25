#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    ll t; cin >>t;
    while(t--){
        ll n; cin>>n;
        ll arr[n];
        for(ll i=0; i<n;i++)  cin>>arr[i];
        sort(arr,arr+n);
      
         
        ll ans=0;
        
        for(ll s=0; s<n; s++){
            ll count=0;
           
           for(ll e=s;e<n;e++){
               if(arr[e]==arr[s]) count++;
               else continue;
           }
           
            ans = max(ans,count);
           
        }
        ll v=0;
        for(ll s=0; s<n; s++){
            ll count=0;
           
           for(ll e=s;e<n;e++){
               if(arr[e]==arr[s]) count++;
               else continue;
           }
           if(ans==count){
               v=arr[s];
               break;
           }else continue; 
                
        }
       cout<<v<<" "<<ans<<endl;
    }
    return 0;
}