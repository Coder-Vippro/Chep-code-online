#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int a,b,c,d;
int main()
{
    freopen("LIENLAC.INP","r",stdin);
    freopen("LIENLAC.OUT","w",stdout);
    cin>>a>>b>>c>>d;
    if(abs(a-c)<=d || (abs(a-b)<=d && abs(b-c)<=d))
    {
        cout<<"YES";
    }
    else cout<<"NO";
}