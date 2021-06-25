#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int s[1010];

bool check_prime(int x)
{
    for (int i = 2; i * i <= x; ++i)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    for (int i = 2; i <= 1000; ++i)
    {
        for (int j = i + 1; i * j <= 1000; ++j)
        {
            if (check_prime(i) && check_prime(j))
            {
                s[i * j] = 1;
            }
        }
    }
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin>>x;
        bool flag = false;
        for (int j = 2; j < x; ++j)
        {
            if (s[j] && s[x - j])
            {
                flag = true;
            }
        }
        if (flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}