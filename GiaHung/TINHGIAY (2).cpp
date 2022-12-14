#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("tinhgiay.inp","r",stdin);
    freopen("tinhgiay.out","w",stdout);
    int h,p,s,s1,s2;
    cin>>h>>p>>s;
    s1=h*60*60;
    s2=p*60;
    cout<<s+s1+s2;
    return 0;
}
