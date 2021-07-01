#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long int n,x,p,k;
    cin>>n>>x>>p>>k;
    long int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }
    sort(arr,arr+n);
    int count=0;
    if(x==arr[p-1])
    {
        cout<<0<<endl;
    }
    else if(k==p)
    {
        if(x<arr[p-1])
        {
        for(int i=p-1;i>=0&&arr[i]>x;i--)
        {
            count++;
        }
        cout<<count<<endl;
        
        }
         else
         {
             for(int i=p-1;i<n&&arr[i]<x;i++)
        {
            count++;
        }
        cout<<count<<endl;
        }
        
    }
    else if(k<p)
    {
        if(x<arr[p-1])
        {
            cout<<-1<<endl;
        }
         else
        {
            for(int i=p-1;i<n&&arr[i]<x;i++)
        {
            count++;
        }
        cout<<count<<endl;
        }
        
    }
    else if(k>p)
    {
        if(x>arr[p-1])
        {
            cout<<-1<<endl;
        }
        else
        {
            for(int i=p-1;i>=0&&arr[i]>x;i--)
            {
                count++;
            }
            cout<<count<<endl;
            }
        }
        
    }
    
   return 0;
}