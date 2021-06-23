#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t,x,k,count;
    cin>>t;
    while(t--){
        cin>>x>>k;
        count = 0;
        while(x%2==0){
            count++;
            x = x/2;
        }
        for(int i =3;i<=sqrt(x);i+=2){
            while(x%i==0){
                count++;
                x = x/i;
            }
        }
        if(x>1){
            count++;
        }
        if(count>=k){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
    return 0;
}