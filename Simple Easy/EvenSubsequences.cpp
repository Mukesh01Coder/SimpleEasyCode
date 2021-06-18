#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     ll t; cin >>t;
     while(t--){
        ll n; cin>>n;
        ll arr[n];
        
        for(ll i=0; i<n; i++)
             cin >> arr[i];
        
        ll count = pow(2,n)-1;
        ll temp = (n*(n-1))/2;


        cout << count << '\n' <<temp <<'\n';
     }
     return 0;
}