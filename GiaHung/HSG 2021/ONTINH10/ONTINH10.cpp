#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int dem=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;i<=n;j++)
            for(int k=1;i<=n;k++)
            if(i<=j && j<=k && i*i+j*k+k*k==n)
        {
            cout<<i<<" "<<j<<" "<<k<<'\n';
            dem++;
        }
    }
    cout<<dem;
    return 0;
}
