#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0); cout.tie(0);

     ll t; cin>>t;
     while(t--){
        string s;
        cin>>s;
        ll n=s.size();
        ll count1=0;
        ll count0=0;
        for(ll i=0; i<n; i++){
             if(s[i]=='1')
             count1++;
             else count0++;
        }
        if(count1%2!=0)
        cout<<"WIN"<<endl;
        else cout<<"LOSE"<<endl;

     }
     return 0;
}