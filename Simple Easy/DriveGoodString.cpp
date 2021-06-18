#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
     ll t; cin>>t;
     while(t--){
          string s;
          cin >>s;
          ll count = 0;
          ll n = s.size();
          sort(s.begin(),s.end());
          cout<<s<<'\n';
          for (ll i = 0; i < n; i++)
          {
             if(s[i] == s[i+1])
              count++;
              else continue;
          }
          cout << count <<'\n';
     }
     return 0;
}