#include <bits/stdc++.h>
using namespace std;
int n;
int dem=0;
int main()
{
    freopen("BAI03.INP","r",stdin);
    freopen("BAI03.OUT","w",stdout);
    freopen("debug.out","w",stdout);
    cin>>n;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    for(int i=1;i<=n;i++)
        for(int j=2;j<=n;j++)
            {
                if(n-i*i-j*j<n && n-i*i-j*j>0 && i<j && j<sqrt(n-i*i-j*j)) 
                {
                    cout<<i<<' '<<j<<' '<<sqrt(n-i*i-j*j)<<'\n';
                    dem++;
                }
            }
    cout<<dem;
}