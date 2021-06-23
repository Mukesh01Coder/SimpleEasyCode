#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
float dis(ll p1,ll r1,ll p2,ll r2){
   return sqrt(pow(p1-p2,2)+pow(r1-r2,2));
}
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0); cout.tie(0);

     ll t; cin>>t;
     while(t--){
          ll R; cin>>R;
          ll x1,y1; cin>>x1>>y1;//A
          ll x2,y2; cin>>x2>>y2;//B
          ll x3,y3; cin>>x3>>y3;//C
          float a = dis(x1,y1,x2,y2);
          float b = dis(x2,y2,x3,y3);
          float c = dis(x1,y1,x3,y3);
          
          if((R>=a && R>=b) ||(R>=b && R>=c)||(R>=a && R>=c))
          cout<<"yes"<<endl;
          else cout<<"no"<<endl;
     }
     return 0;
}