#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     ll t; cin>>t;
     while(t--){
          string s;
          cin >> s;
          ll n = s.size();
          ll count=0,max=0;
         for (ll i = 0; i < n; i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
              count++;
            else count = 0;
             if (count>=max){
                max = count;
            }
          }   
          cout << max << '\n';
 }
    return 0; 
    
}