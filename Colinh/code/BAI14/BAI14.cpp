#include <bits/stdc++.h>
using namespace std;
int A[1001][1001];
int m,n;
int maxx=-1e9;
int dem=0;
int main()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            {
                cin>>A[i][j];
            }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            {
                dem=dem+A[i][j];
            }
        if(dem>maxx)
        {
            maxx=dem;
        }
    }
    cout<<maxx;
    return 0;
}