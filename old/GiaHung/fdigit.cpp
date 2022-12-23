#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("fdigit.inp","r",stdin);
    freopen("fdigit.out","w",stdout);
    long long n;
    cin>>n;
    long long m=n,d=0,so;
    while(m>0)
    {
        so=m%10;
        if(so!=0 && n%so==0) d++;
        m/=10;
    }
    cout<<d;
    return 0;
}