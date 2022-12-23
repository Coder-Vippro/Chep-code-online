#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("Egypt.inp","r",stdin);
    freopen("Egypt.out","w",stdout);
    int a,b,c;
    while(cin>>a>>b>>c)
        if(a>0&&b>0&&c>0)
    {
        if(a*a==b*b+c*c || b*b==a*a+c*c ||c*c==b*b+a*a ) cout<<"right"<<endl;
        else cout<<"wrong"<<endl;
    }
    return 0;
}