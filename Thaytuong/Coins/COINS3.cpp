#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int f[10000001];
int C[10000001];
int main()
{
    freopen("COINS3.INP","r",stdin);
    freopen("COINS3.OUT","w",stdout);
    f[0]=0;
    int x,n;
    cin>>n>>x;
    for (int i = 1; i <= n; i++)
    {
        cin>>C[i];
    }
    for (int i = 1; i <=x; i++)
    {
        f[i]=x;
        for (int j = 1; j <=n; j++)
        {
            if (i>=C[j])
            {
                if (f[i-C[j]]+1<f[i])
                {
                    f[i]=f[i-C[j]]+1;
                }  
            }
        }
    }
    cout<<f[x];
} 
