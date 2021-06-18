#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     ll t; cin >> t;
     while(t--){
       string S,R;
       cin>>S>>R;
      ll n = S.size();
       ll l=0,k=0;
       ll gaplength = 0;
       vector<ll> gaps;
       bool temp = 0;
       for(ll i=0; i<n; i++){
            if(S[i]==R[i]){
              if(temp) gaplength++;
             continue;
            }else{
                 if(!temp) k++;
                l++;
                temp = true;
                if(gaplength>0){
                       k++;
                       gaps.push_back(gaplength);
                       gaplength = 0;
                   }
            }
            
       }
       sort(gaps.begin(),gaps.end());
       ll ans = l*k;
       for(auto gaplength:gaps){
            k--;
            l+=gaplength;
            ans = min(ans,l*k);
          } 
       cout<<ans<<'\n';
     }
     return 0;
}