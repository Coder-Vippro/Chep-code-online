#include <bits/stdc++.h>

using namespace std;
int n,m;
int A[10000001];
int B[10000001];
int main()
{
    freopen("DAY_CHUNG_MIN.inp","r",stdin);
    freopen("DAY_CHUNG_MIN.out","w",stdout);
    cin>>n>>m;
    int dem=0;
    for(int i=1;i<=n;i++)
        cin>>A[i];
    for(int i=1;i<=m;i++)
        cin>>B[i];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
    {
        if(A[i]==B[j])
            {
                dem++;
                cout<<dem;
                return 0;
            }
    }

    return 0;
}
