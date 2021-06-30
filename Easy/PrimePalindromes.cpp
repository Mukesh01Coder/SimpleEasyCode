#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long int ll;
ll isPalindrome(ll n);
bool isPrime(ll n){ 
    ll prime = 1;
    for (ll i =2;i<(ll)sqrt(n)+1;i++)
    {
        if(n%i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime ==0)
    return 0;
    else return 1;
}
ll isPalindrome(ll n){
    ll rem,rev=0;
    int p=n;
    while(p!=0)
    {
        rem=p%10;
        rev=rev*10+rem;
        p=p/10;
    }
    if(n==rev)
        return 1;
    else
        return 0;
}
int main() {
    ll t;
	cin>>t;
	ll temp = 1;
	while(temp)
	{
	    if(isPalindrome(t)) 
	        if(isPrime(t))
	        break;
	    t++;
	}
	cout<<t<<endl;;
	return 0;
}