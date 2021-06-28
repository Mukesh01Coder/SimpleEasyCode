#include<bits/stdc++.h>
using namespace std;
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0); cout.tie(0);
     
     int n; cin>>n;
     int count = 0;
     while(n--){
        int x1,y1,x2,y2,x3,y3; 
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        int d1 = pow((x2-x1),2) + pow((y2-y1),2);
        int d2 = pow((x3-x2),2) + pow((y3-y2),2);
        int d3 = pow((x3-x1),2) + pow((y3-y1),2);  
        if((d1+d2==d3)||(d2+d3==d1)||(d3+d1==d2))
           count++;
     }
    cout<<count<<'\n';
     return 0;
}