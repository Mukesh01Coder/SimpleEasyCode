#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);

     ll t; cin>>t;
     while(t--){
       ll n; cin>>n;
       ll a[n];
       for(ll i=0; i<n; i++)
       cin >> a[i];
       sort(a,a+n);
      ll sum = 0;
      ll flag = 0;
      for(ll i=0; i<n; i++){
           if(a[i]>i+1){
                cout<<"Second"<<'\n';
                flag = 1;
                break;
            }else {sum += i+1-a[i]; } 
                
                
          }  
          if(flag == 1) continue;     
          if(sum%2 == 0)
          cout <<"Second"<<'\n';
          else cout<<"First"<<'\n';
     }
     return 0;
}