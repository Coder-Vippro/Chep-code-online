#include <bits/stdc++.h>

using namespace std;
int n,k;
int main()
{
    //freopen("YEN.INP","r",stdin);
    //freopen("YEN.OUT","w",stdout);
    cin>>n>>k;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if((k-i*10000-j*1000)%5000==0 && (k-i*10000-j*1000)/5000+i+j==n && (k-i*10000-j*1000)/5000>=0 && i>=0 && k>=0)
            {
                cout<<i<<" "<<(k-i*10000-j*1000)/5000<<' '<<j;
                return 0;
            }
        }
    }
    cout<<-1<<' '<<-1<<' '<<-1;
    return 0;
}
