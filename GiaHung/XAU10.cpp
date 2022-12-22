#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("XAU10.inp","r",stdin);
    freopen("XAU10.out","w",stdout);
    long long k;
    cin>>k;
    string a,d=" ";
    cin>>a;
    for(int i =k-1;i>=0;i--)
    {
        d=a[i]+d;
    }
    for(int i =a.size()-1;i>=k;i--)
    {
        d=a[i]+d;
    }
    cout<<d;
    return 0;
}
