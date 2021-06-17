#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
    ll n;
    cin>>n;
    ll arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int q;
    cin>>q;
    while(q--){
            ll x;
            cin>>x;
            ll count = 0;
          for(int i = 0;i<n;i++){
            int sum  = 0;
            for(int j = i;j<n;j++){
                sum+=arr[j];
                if(sum==x){
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
