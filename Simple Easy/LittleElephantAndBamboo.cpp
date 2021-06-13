#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     
     ll t; cin >>t;
     while(t--){
      ll n; cin >>n;
      ll h[n],sumh = 0;
      ll d[n],sumd = 0;
      for(ll i=0; i<n; i++){
           cin >> h[i];
           sumh += h[i];
         }
      for(ll i=0; i<n; i++){
           cin >> d[i];
           sumd += d[i];
         }
       if(n==1){
            if(sumd>sumh) cout<<(-1)<<'\n';
            else cout<<(sumh-sumd)<<'\n';
            continue;
         }
       if(n==2){
            ll num1 = h[0]-d[0];
            ll num2 = d[1]-h[1];
            if(num1 == num2)
            cout<<abs(num1)<<'\n';
            else cout<<(-1)<<'\n';
            continue;
         }
           if((sumd-sumh)<0 || ((sumd-sumh)%(n-2) !=0)){
            cout<<(-1)<<'\n';
            continue;
           }
            else{
                ll s =(sumd-sumh)/(n-2);
                ll sum = 0;
                bool flag = true;
                for(ll i=0; i<n; i++){
                     ll x = d[i]-h[i];
                     ll mi = s - x;
                     if(mi%2 !=0 || mi/2<0){
                          flag = false;
                          break;
                        }
                        sum += mi/2; 
                    }
                    if(sum == s && flag == true)
                    cout<<s<<'\n';
                    else
                    cout<<(-1)<<'\n';
              }
          
     }
     return 0;
}