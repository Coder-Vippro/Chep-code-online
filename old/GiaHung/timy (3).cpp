#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("timy.inp","r",stdin);
    freopen("timy.out","w",stdout);
    int x,z;
    long long lt=1,kq=0;
    cin>>x>>z;
    if(x<0) cout<<"Nhap sai";
    else
    {
        for(int i=1;i<=x;i++) lt=i+7;
        kq=lt+2*x;
        cout<<kq;
    }
    return 0;
}
