#include <bits/stdc++.h>
using namespace std;
long long a[105],b[105],C[105][105],n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)cin>>C[i][j];
    a[1]=1;b[1]=C[1][1]-1;
    for(int i=2;i<=n;i++)
        {
        a[i]=C[i][i-1]-b[i-1];
        b[i]=C[i][i]-a[i];
    }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        if(a[i]+b[j]!=C[i][j])
        {cout<<"No";return 0;}
    cout<<"Yes";
}
    