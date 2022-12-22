#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[1001];
    int n,x,dem=0;
    cin>>n>>x;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
        if(a[i]+a[j]==x)
        {
            dem++;
        }
        cout<<dem;

    return 0;
}
