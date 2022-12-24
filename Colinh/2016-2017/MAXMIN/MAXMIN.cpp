#include <bits/stdc++.h>
using namespace std;
int A[1000001];
int n;
int main()
{
    freopen("MAXMIN.INP","r",stdin);
    freopen("MAXMIN.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    sort(A+1,A+n+1);
    cout<<A[1]+A[n]<<'\n';
    for(int i=1;i<=n;i++)
    {
        cout<<A[i]<<' ';
    }
    return 0;
}