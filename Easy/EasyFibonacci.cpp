#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
int main(){
     ios::sync_with_stdio(false);
     cin.tie(NULL); cout.tie(NULL);

     ll t; cin>>t;
     while(t--){
       ll n; cin>>n;
	        ll  x;
	        ll f3=0;
		   ll f1=0;
		   ll f2=1;
		   ll j =1;
		    while(j<n && (j*2 <=n)){
		        j *= 2;
		    }
              int fib[60];
		    fib[1] = 0;
		    fib[2] = 1;
		    for(x=3;x<=60;x++)
		    {
		        f3 = f1+f2;
		        fib[x] = f3%10;
		        f1 = f2;
		        f2 = f3;
		    }
              int i;
		    i = j%60;
		    cout<<fib[i]<<endl;      
     }
     return 0;
}