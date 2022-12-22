#include <bits/stdc++.h>
using namespace std;
int x;
int maxx=-1e9;
int A[100001];
int main()
{
    freopen("CONSECUTIVEGAPS.INP","r",stdin);
    freopen("CONSECUTIVEGAPS.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        cin>>A[i];
    }
    for(int i=2;i<=x;i++)
    {
        if(A[i]-A[i-1]>maxx)
        maxx=A[i]-A[i-1];
    }
    cout<<maxx;
}