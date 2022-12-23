#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("timkiem.inp","r",stdin);
    freopen("timkiem.out","w",stdout);
    int x,y,a[1001],n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cin>>x>>y;
    for(int i=1;i<=n;i++)
    {
        if(a[i]==x)cout<<y<<" ";
        else cout<<a[i]<<" ";
    }
    return 0;
}
