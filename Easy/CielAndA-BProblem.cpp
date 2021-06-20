#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
     ll a,b; cin >> a >>b;
     
     if((a-b)%10 == 9)
     cout<< (a-b)-1 <<'\n';
     else cout<< (a-b)+1 <<'\n';
     return 0;
}