#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long k;
        int d0,d1;
        cin>>k>>d0>>d1;
        if((d0+d1)%5==0 && k>2){
            cout<<"NO"<<endl;
        }
        else{
            long long rd,sum,i=2,s;
            s=(d0+d1)%10;
            sum=d0+d1;
            while(s!=2 && i!=k){
                sum+=s;
                s+=s;
                s=s%10;                
                i++;
            }
            //cout<<sum<<endl;
            rd=k-i;
            if((rd%4)==1){
                sum+=2;
            }else if((rd%4)==2){
                sum+=6;
            }else if((rd%4)==3){
                sum+=14;
            }
            sum+=(rd/4)*20;
            //cout<<sum<<endl;
            if(sum%3==0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}