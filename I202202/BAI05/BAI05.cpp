#include <bits/stdc++.h>
using namespace std;
int A[100001];
int n;
int main()
{
    freopen("BAI05.INP","r",stdin);
    freopen("BAI05.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    sort(A+1,A+n+1);
    if(A[1]*A[2]>A[n]*A[n-1])
    {
        cout<<A[1]*A[2];
    }
    else cout<<A[n]*A[n-1];
}