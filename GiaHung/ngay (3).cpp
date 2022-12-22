#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("ngay.inp","r",stdin);
    //freopen("ngay.out","w",stdout);
    int m,d,y;
    cin>>d>>m>>y;
    int s=d;
    for(int i=2000;i<y-1;i++){
    if(i%4==0)s=s+366;
    else s=s+365;
    }
    for(int j=1;j<m;j++){
        if(j==4||j==6||j==8||j==10||j==12)s=s+30;
        else s=s+30;
    }
    if(y%4==0)s=s-1;
   cout<<s;
    return 0;
}
