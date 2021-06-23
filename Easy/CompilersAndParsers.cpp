#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
     ios:: sync_with_stdio(0);
     cin.tie(0); cout.tie(0);

     ll t; cin>>t;
     while(t--){
       string s;
       cin>>s;
       ll n=s.size();
       ll count=0,inc=0;
       ll ans=0;
       for(ll i=0;i<n;i++){
            if(s[i]=='<'){
               inc++;
               count++;
            }else if(s[i]=='>'){
                 inc--;
               count++;
            }
            if(inc==0) ans = count;
            if(inc<0) break;
       }
       cout <<ans <<'\n';
     }
     return 0;
}