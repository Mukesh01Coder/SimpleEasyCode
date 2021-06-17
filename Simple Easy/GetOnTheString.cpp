#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     ll n;
     string s;
     cin >> n >> s;
     
     for (ll i = 0; i < n; i++){
     
          for (ll len = 1; len <= (n-i); len++){
               if(len == s.length()){
                  cout<<s.substr(i,len)<<'\n';
               }
          }
     }   
     
    return 0; 
    
}