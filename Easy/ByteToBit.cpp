#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0); cout.tie(0);

     ll t; cin>>t;
     while(t--){
        ll n; cin>>n;
        ll count=1;
        while(n>26){
             count *= 2;
             n -= 26;
        }
        if(n<=2) cout<<count<<0<<0<<endl;
        else if(n>2 && n<=10) cout<<0<<count<<0<<endl;
              else cout<<0<<0<<count<<endl;
     }
     return 0;
}