#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {

	string ans="abcdefghijklmnop";
	ll t;
	cin>>t;
	while(t--){
	    
	    ll n;
	    string s;
	    cin>>n;
	    cin>>s;
	    for(int i=0;i<n;i+=4){
	        string str=s.substr(i,4);
	        cout<<ans[stoi(str,nullptr,2)];
	    }
	    cout<<'\n';;
	}
	return 0;
}
