#include <bits/stdc++.h>

using namespace std;
int A[100001],f[100001];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    f[1]=A[1];
    f[2]=min(3*A[2],f[1]+abs(A[2]-A[1]));
    for(int i=3;i<=n+1;i++)
    {
        f[i]=min(f[i-1]+abs(A[i]-A[i-1]),f[i-2]+3*abs(A[i]-A[i-2]));

    }
    cout<<f[n+1];
    return 0;
}

