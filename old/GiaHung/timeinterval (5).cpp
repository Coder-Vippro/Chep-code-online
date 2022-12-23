#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("timeinterval.inp","r",stdin);
    freopen("timeinterval.out","w",stdout);
    int h1,m1,s1,h2,m2,s2,ts1,ts2;
    cin>>h1>>m1>>s1>>h2>>m2>>s2;
    h1=h1*60*60;
    m1=m1*60;
    h2=h2*60*60;
    m2=m2*60;
    ts1=h1+m1+s1;
    ts2=h2+m2+s2;
    if(ts1<ts2) cout<<ts2-ts1;
    else cout<<ts1-ts2;
    return 0;
}
