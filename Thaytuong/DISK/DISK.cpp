#include <bits/stdc++.h>

using namespace std;
int A[10001];
int n;
int main()
{
    freopen("DISK.INP","r",stdin);
    freopen("DISK.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    sort(A,A+n+1);
    int dem=1;
    for(int i=2;i<=n;i++)
    {
        if(A[i]!=A[i-1])
            dem++;
    }
    cout<<dem;
    return 0;
}
