#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("date_next.inp","r",stdin);
    freopen("date_next.out","w",stdout);
    int m,d,y,s=0;
    cin>>y>>m>>d;
    for(int i=1900;i<y;i++){
    if(i%4==0)s=s+366;
    else s=s+365;
    }
    for(int j=1;j<m;j++){
        if(j==4||j==6||m==||m==11)s=s+31;
        else s=s+30;
    }
    if(y%4==0)s=s-1;
   int x=s%7;
   if(z=1)cout<<"THU HAI"
    return 0;
}
