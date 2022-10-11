#include <bits/stdc++.h>
using namespace std;
pair<int,pair<int,int> > a[10005];
int f[10005],ma,vt;
int main()
{
    freopen("ACTIVITY.inp","r",stdin);
    freopen("ACTIVITY.out","w",stdout);
    int n;cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].first>>a[i].second.first;
        a[i].second.second=i;
    }
    sort(a+1,a+n+1);
    f[1]=1;
    for(int i=2;i<=n;i++)
    {
        ma=0;
        for(int j=1;j<i;j++)
        {
            if(a[j].second.first<=a[i].first)
                ma=max(ma,f[j]);
        }
        f[i]=ma+1;
    }
    ma=1;vt=1;
    for(int i=2;i<=n;i++)
        if(f[i]>ma)
            {
                ma=f[i];vt=i;
            }
    cout<<ma<<endl;
    f[vt]=-f[vt];
    for(int l=ma-1;l>=1;l--)
        for(int i=vt-1;i>=1;i--)
            if(a[vt].first>=a[i].second.first&&f[i]==l)
                {
                    vt=i;f[vt]=-f[vt];
                    break;
                }
    for(int i=1;i<=n;i++)
        if(f[i]<0) cout<<a[i].second.second<<endl;
    return 0;
}
