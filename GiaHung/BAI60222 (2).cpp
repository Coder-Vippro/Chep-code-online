#include<bits/stdc++.h>
using namespace std;
long long a,b,c;
int main()
{
    freopen("BAI60222.INP","r",stdin);
    freopen("BAI60222.OUT","w",stdout);
    cin>>a>>b>>c;
    if(c+1==60 && b+1<=59)
    {
        cout<<a<<' '<<b+1<<' '<<"0";
    }
    if(c+1==60 && b+1==60)
    {
        cout<<a+1<<' '<<'0'<<' '<<'0';
    }
    if(c+1==61 && b+1==60)
    {
        cout<<a+1<<' '<<'0'<<' '<<'1';
    }
    if(c+1<60)
    {
        cout<<a<<' '<<b<<' '<<c+1;
    }
    return 0;
}