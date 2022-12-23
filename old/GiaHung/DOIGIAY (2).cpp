#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("DOIGIAY.inp","r",stdin);
    freopen("DOIGIAY.out","w",stdout);
    int n;
    cin>>n;
    int h,p,s;
    h=n/3600;
    p=(n%3600)/60;
    s=(n%3600)%60;
    cout<<h<<":"<<p<<":"<<s;
    return 0;
}
