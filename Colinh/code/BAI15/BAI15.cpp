#include <bits/stdc++.h>
using namespace std;
int A[1001][1001];
int m,n;
int dem=0;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            {
                cin>>A[i][j];
            }
    }
    for(int j=1;j<=m;j++)
    {
        dem=dem+A[j][1];
    }
    cout<<dem;
    return 0;
}