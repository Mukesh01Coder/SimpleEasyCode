#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;

int main(){
     ll t; cin>>t;
     while(t--){
        ll n; cin>>n;
        double loss=0;
        for(ll i=1;i<=n;i++){ 

             ll p,q,d;
             cin>>p>>q>>d;
             double incp = p;  

             incp += incp*d/100;
             incp -=  incp*d/100;
             
             loss +=(p-incp)*q;
                   
        }
         //#include <iomanip>   std::setprecision
       cout<<setprecision(30)<<loss<<endl; // std::cout, std::fixed
     }
     return 0;
}
