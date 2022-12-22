#include <bits/stdc++.h>

using namespace std;
long long n,k;
long long A[1000001];
int main()
{
    freopen("KHIEUVU3.INP","r",stdin);
    freopen("KHIEUVU3.OUT","w",stdout);
    cin>>n>>k;
    int dem=0;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        for(int j=1;j<=n;j++)
        if(A[i]-A[j]==k)
           dem++;
    }

    cout<<dem/2;
    return 0;
}
