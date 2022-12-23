#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("tgcan.inp","r",stdin);
    freopen("tgcan.out","w",stdout);
    long long x,y,z;
    cin>>x>>y>>z;
    if(x+y>z && x+z>y && y+z>x)
    {
            if(x==y || x==z || y==z) cout<<"LA TAM GIAC CAN";
            else cout<<"KHONG PHAI TAM GIAC CAN";
    }
    else cout<<"KHONG PHAI TAM GIAC CAN";
    return 0;
}
