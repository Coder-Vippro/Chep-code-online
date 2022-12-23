#include <bits/stdc++.h>

using namespace std;
int A[100000];
int maxx=-1e9;
int main()
{
    freopen("UCLN.INP","r",stdin);
    freopen("UCLN.OUT","w",stdout);
    int n;
    cin>>n;
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                maxx=max(maxx,__gcd(A[i],A[j]));
            }
        }
    cout<<maxx;
    return 0;
}
