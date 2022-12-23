#include <bits/stdc++.h>

using namespace std;

int main()
{
freopen("ONTINH02.INP","r",stdin);
    freopen("ONTINH02.OUT","w",stdout);
    int n;
    cin>>n;
    int dem=0;
    if(n%2==1)
        cout<<0;
    else
    {
    for(int i=1;i<=n;i++)
        for(int j=2;j<=n;j++)
            if(i!=j && i*2+j*2==n)
               dem++;
    cout<<dem-1;
    }
    return 0;
}
