#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
     ll t;
     cin>>t;
     while(t--){
          ll n;
          cin>>n;
          ll arr[n][n];
          
          ll count = 1;
          for(ll i =0; i<n; i++){
               for(ll j=0; j<n; j++){
                 arr[i][j] = count++;
               }
          }
          for(ll i =0; i<n; i++){
               if(i%2 == 0){
                    for(ll j=0; j<n; j++){
                        cout<<arr[i][j]<<" ";
                    }
                    cout<<'\n';
               }else{
                    for(ll j=n-1; j>=0; j--){
                        cout<<arr[i][j]<<" ";
                    }  
                    cout<<'\n';  
               }    
               
          }
          cout<<'\n'; 
     }
     return 0;
}