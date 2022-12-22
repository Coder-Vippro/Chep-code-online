#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("Cstancung.inp","r",stdin);
    freopen("Cstancung.out","w",stdout);
    long long a,b,t=1;
    cin>>a>>b;
    a=a%10;
    for(int i=1;i<=b;i++)
    {
        t=t*a;
        t=t%10;
    }
    cout<<t;
    return 0;
}
