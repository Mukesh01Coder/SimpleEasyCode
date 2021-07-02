#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
int main() {
	// your code goes here
	ll t; cin>>t;
	while(t--){
	   ll n; cin>>n;
	   string s,p;
	   cin>>s;
	   cin>>p;
	  ll  counts0 = 0,counts1=0;
	  ll  countp0 = 0,countp1=0;
	  bool flage = true;
	   for(ll i=0;i<n;i++){
	      s[i]=='0'? counts0++:counts1++;
	      p[i]=='0'? countp0++:countp1++;
	      if(counts0>countp0){
	         flage=false;
	         break;
	      }
	   }
	   if(flage){
	   if(counts0==countp0 || counts1==countp1) cout<<"YES"<<endl;
	   else cout<<"NO"<<endl;
	   }else  cout<<"NO"<<endl;
	}
	return 0;
}
