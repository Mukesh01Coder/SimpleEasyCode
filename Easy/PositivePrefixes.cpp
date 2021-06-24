#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"

int main() 
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll t;  cin>>t;
    while(t--)
    {
        ll n,k;   cin>>n>>k;
        ll arr[n];
        for(ll i=0;i<n;i++)
        {
            if(i%2==0)
             arr[i]=i+1;
            if(i%2==1)
             arr[i]=-(i+1);
        }
        ll pos;
   
        if(n%2==0)
         pos=n/2;
         else pos=n/2+1;
        
        if (pos > k)
		
			for (ll i = n - 1; i >= 0; i--)
			{
				if (pos == k)
					break;
				if (arr[i] > 0)
				{
					arr[i] = -arr[i];
					pos--;
				}
			}
		else
		
			for (ll i = n - 1; i >= 0; i--)
			{
				if (pos == k)
					break;
				if (arr[i] < 0)
				{
					arr[i] = -arr[i];
					pos++;
				}
			}
		
        for(ll i=0;i<n;i++)
          cout<<arr[i]<<" ";
        
          cout<<endl;
    }
	return 0;
}