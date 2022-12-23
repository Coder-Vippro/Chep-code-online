#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("ot76.inp","r",stdin);
    freopen("ot76.out","w",stdout);
    int m,d,y,s=0;
    cin>>d>>m>>y;
    for(int i=1900;i<y;i++){
    if(i%4==0)s=s+366;
    else s=s+365;
    } cout<<s<<'\n';
    for(int j=1;j<m;j++){
        if(j==4||(j==6||(j==9||j==11)))s=s+30;
        else s=s+31;
    }cout<<s<<'\n';
    if(y%4==0)s=s-1;
    cout<<s<<'\n';
   int z=s%7;
   if(z=1)cout<<"THU HAI";
   else if(z=2)cout<<"THU BA";
   else if(z=3)cout<<"THU TU";
   else if(z=4)cout<<"THU NAM";
   else if(z=5)cout<<"THU SAU";
   else if(z=6)cout<<"THU BAY";
   else if(z=7)cout<<"CHU NHAT";
    return 0;
}
