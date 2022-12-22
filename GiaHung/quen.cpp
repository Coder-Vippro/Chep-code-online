#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("quen.inp","r",stdin);
    freopen("quen.out","w",stdout);
    int n,a[100001];
    cin>>n;
    int kq=n-1;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<n;i++)
    {
        int ma=a[i+1];
        if(a[i]>=ma)
        {
            for(int j=i+2;j<=n;j++)
            if(a[j]>=ma)
            {
                kq++;
                ma=a[j];
            }
        }
    }
    cout<<kq;
    return 0;
}
