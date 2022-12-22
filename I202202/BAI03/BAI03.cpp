#include <bits/stdc++.h>
using namespace std;
int n;
int dem=0;
int main()
{
    freopen("BAI03.INP","r",stdin);
    freopen("BAI03.OUT","w",stdout);
    cin>>n;
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