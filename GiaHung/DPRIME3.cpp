#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("DPRIME3.INP","r",stdin);
    freopen("DPRIME3.OUT","w",stdout);
    int dem=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            for(int k=1;k<=n;k++)
                if(i<j && j<k && i*i+j*j==k)
                    {
                        cout<<i<<' '<<j<<' '<<k;
                        dem++;
                    }
                
    }
    if(dem==0)cout<<-1;
    return 0;
}