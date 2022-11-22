#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("TABLE.INP", "r",stdin);
    freopen("TABLE.OUT", "w",stdout);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int maxx=max(a,b);
    maxx=max(c,d);
    if(maxx==a)
    {
        cout<<0;
    }
    else if(maxx==c)
    {
        cout<<1;
    }
    else if(maxx==d)
    {
        cout<<2;
    }
    else if(maxx==b)
    {
        cout<<3;
    }
}