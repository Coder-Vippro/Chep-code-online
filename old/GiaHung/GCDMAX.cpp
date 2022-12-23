#include <bits/stdc++.h>
using namespace std;
int n,k;
int main()
{
    freopen("GCDMAX.INP","r",stdin);
    freopen("GCDMAX.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    while(n>0)
    {
        cin>>k;
        int mmax=1;
        for(int i=1;i<=k;i++)
        {
            for(int j=1;j<=k;j++)
            {
                if(__gcd(i,j)>mmax && i!=j)
                mmax=__gcd(i,j);
            }
        }
        cout<<mmax<<'\n';
        mmax=1; 
        n--;
    }
    return 0;
}