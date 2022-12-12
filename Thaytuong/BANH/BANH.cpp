#include <bits/stdc++.h>
using namespace std;
long long A[10000001];
long long n,x;
int kq;
int main()
{
    freopen("BANH.INP","r",stdin);
    freopen("BANH.OUT","w",stdout);
    cin>>n>>x;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    sort(A+1,A+n+1);
    for(int i=1;i<=n;i++)
    {
        x=x-A[i];
    }
    kq=n;
    kq+=x/A[1];
    cout<<kq;
    return 0;
}
