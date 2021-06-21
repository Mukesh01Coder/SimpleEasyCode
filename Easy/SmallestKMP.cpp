#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t; cin >> t;
     while(t--)
    {
        string s,p;  cin >> s >> p;
        int cnt[26] = {0};
        for(char i:s) cnt[i-'a']++;
        for(char i:p) cnt[i-'a']--;
 
        ll flag = 1;
 
        for(ll i=1;i<p.size();i++)
        {
            if(p[i] == p[i-1])
                continue;
 
            if(p[i] < p[i-1])
                flag = 0;
            
            break;
        }
 
        ll pos = p[0] - 'a' + flag;
 
        for(ll i=0;i<pos;i++)
        {
            while(cnt[i] > 0)
            {
                char c = 'a' + i;
                cout << c;
                cnt[i]--;
            }
        }
 
        cout << p;
 
        for(ll i=pos;i<26;i++)
        {
            while(cnt[i] > 0)
            {
                char c = 'a' + i;
                cout << c;
                cnt[i]--;
            }
        }
        cout << endl;
    }
    return 0;
}  
