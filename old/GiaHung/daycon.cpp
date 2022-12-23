#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("daycon.inp","r",stdin);
    freopen("daycon.out","w",stdout);
    int n,a[100001],luu1,luu2,d=1;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        int t=1;
        for(int j=i+1;j<=n;j++)
    {
        if(a[j]>=a[j-1])t++;
        else if(t>d)
        {
            luu1=i;
            luu2=j-1;
            d=t;
            i=j;
            break;
        }
        else break;
    }
    }
    for(int i=luu1;i<=luu2;i++)cout<<a[i]<<" ";

    return 0;
}
