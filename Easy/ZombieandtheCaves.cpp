#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long  ll;
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);
   
   ll t; cin>>t;
   while(t--){
      ll n; cin>>n;
       ll c[n],h[n],d[n];
       for(ll i=0; i<n; i++) cin>>c[i];
       for(ll i=0; i<n; i++) cin>>h[i]; 
       for(ll i=0; i<n; i++) d[i]=0;
       
       for(ll i=0; i<n; i++){
          if(i-c[i]>=0)
          d[i-c[i]] += 1;
          else d[0] += 1;
          
          if(i+c[i]+1<=n-1)
          d[i+c[i]+1] -= 1;
          else continue;
       }
       for(ll i=1;i<n;i++)
	     d[i]=d[i]+d[i-1];
          ll temp=0;
       sort(h,h+n);
       sort(d,d+n);
       
       for(ll i=0;i<n;i++){
          if(d[i]==h[i]) continue;
          else {temp++; break;}
       }
       if(temp==0) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   }
   return 0;
}