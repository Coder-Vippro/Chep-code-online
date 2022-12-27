#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int A[1000001];
int dem=0;
int main()
{
    freopen("SUMX.INP","r",stdin);
    freopen("SUMX.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    int x;cin>>x;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            if(A[i]+A[j]==x)
            dem++;
        }
    }
    cout<<dem;
}