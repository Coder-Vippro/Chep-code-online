#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("thoigian.inp","r",stdin);
    freopen("thoigian.out","w",stdout);
    int h1,m1,s1,h2,m2,s2,h,m,s,sd1,sd2;
    cin>>h1>>m1>>s1>>h2>>m2>>s2;
    h=h2-h1;
    m=m2-m1;
    s=s2-s1;
    sd1=h*60*60;
    sd2=m*60;
    cout<<sd1+sd2+s;
    return 0;
}
