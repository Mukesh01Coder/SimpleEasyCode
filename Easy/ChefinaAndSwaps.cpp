#include<bits/stdc++.h>
#define endl "\n"
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve()
{
    ll n;
        cin>>n;
        
        ll x;
        map<ll, ll> m;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            m[x]++;
        }
        for(int i=0;i<n;i++)
        {
            cin>>x;
            m[x]--;
        }
        
        ll mi = x;
        vector<ll> v1;
        vector<ll> v2;
        for(auto i:m)
        {
            mi = min(mi, i.first);
            
            x = i.second;
            if(abs(x)%2)
            {
                cout<<-1<<"\n";
                return;
            }
            
            if(x>0)
            {
                x = x/2;
                while(x--)
                {
                    v1.push_back(i.first);
                }
            }
            else if(x<0)
            {
                x = abs(x)/2;
                while(x--)
                {
                    v2.push_back(i.first);
                }
            }
        }
        
        reverse(v2.begin(), v2.end());
        
        ll ans = 0;
        for(int i=0;i<v1.size();i++)
        ans += min(2*mi, min(v1[i], v2[i]));
        
        cout<<ans<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
	return 0;
}