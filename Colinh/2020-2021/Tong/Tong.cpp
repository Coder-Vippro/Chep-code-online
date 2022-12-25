#include <iostream>
#include <cstdio>
using namespace std;
long long a,b,c,d;
long long kq=0;
int main()
{
    freopen("Tong.INP","r",stdin);
    freopen("Tong.OUT","w",stdout);
    cin>>a>>b>>c>>d;
    if(a%2==0)kq=kq+a;
    if(b%2==0)kq=kq+b;
    if(c%2==0)kq=kq+c;
    if(d%2==0)kq=kq+d;
    cout<<kq;
}