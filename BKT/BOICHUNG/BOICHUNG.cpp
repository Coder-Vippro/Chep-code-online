#include <bits/stdc++.h>

using namespace std;
int n,m;
int dem=0;
int main()
{
    freopen("BOICHUNG.INP","r",stdin);
    freopen("BOICHUNG.OUT","w",stdout);
    cin>>n>>m;
    int i=n;
    while(i<=n*m)
    {
        if(i%n==0 && i%m==0)
        {
            dem++;
            cout<<i<<' ';
        }
        i++;
    }

    return 0;
}
