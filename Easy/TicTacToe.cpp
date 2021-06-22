#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){

    ll t; cin>>t;
    while(t--){
        int cx=0,co=0,sp=0;
        char a[3][3];
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>a[i][j];
                if(a[i][j]=='X') cx++;
                if(a[i][j]=='O') co++;
                if(a[i][j]=='_') sp++;
            }
        }
        int wx=0,wo=0;

         // column winner for 'X'
        if(a[0][0]=='X' && a[1][0]=='X' && a[2][0]=='X') wx=1;
        if(a[0][1]=='X' && a[1][1]=='X' && a[2][1]=='X') wx=1;
        if(a[0][2]=='X' && a[1][2]=='X' && a[2][2]=='X') wx=1;
         // row winner
        if(a[0][0]=='X' && a[0][1]=='X' && a[0][2]=='X') wx=1;
        if(a[1][0]=='X' && a[1][1]=='X' && a[1][2]=='X') wx=1;
        if(a[2][0]=='X' && a[2][1]=='X' && a[2][2]=='X') wx=1;
        // diagonal winner
        if(a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='X') wx=1;
        if(a[0][2]=='X' && a[1][1]=='X' && a[2][0]=='X') wx=1;
         // row winner for 'O'
        if(a[0][0]=='O' && a[1][0]=='O' && a[2][0]=='O') wo=1;
        if(a[0][1]=='O' && a[1][1]=='O' && a[2][1]=='O') wo=1;
        if(a[0][2]=='O' && a[1][2]=='O' && a[2][2]=='O') wo=1;
        // column winner   
        if(a[0][0]=='O' && a[0][1]=='O' && a[0][2]=='O') wo=1;
        if(a[1][0]=='O' && a[1][1]=='O' && a[1][2]=='O') wo=1;
        if(a[2][0]=='O' && a[2][1]=='O' && a[2][2]=='O') wo=1;
        // diagonal winner
        if(a[0][0]=='O' && a[1][1]=='O' && a[2][2]=='O') wo=1;
        if(a[0][2]=='O' && a[1][1]=='O' && a[2][0]=='O') wo=1;

      if((wx==1 && wo==1)||((cx-co)<0)||(cx-co)>1) cout << 3 << endl;
      else if(cx==0 && co==0 && sp==9) cout<<2<<endl;
      else if(wx==1 && wo==0 && cx >co) cout<<1<<endl;
      else if(wx==0 && wo==1 && cx== co) cout<<1<<endl;
      else if(wx==0 && wo==0 && sp==0) cout<<1<<endl;
      else if(wx==0 && wo==0 && sp>0) cout<<2<<endl;
      else cout<<3<<endl;
    }
    return 0;
}