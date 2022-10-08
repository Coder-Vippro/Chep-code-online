#include <bits/stdc++.h>

using namespace std;
pair<int,pair<int,int>>a[10001];
int n;
int f[10001];
int maxx;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].first>>a[i].second.first;
        a[i].second.second=i;
    }
    f[1]=1;
    for(int i=2;i<=n;i++)
    {
        maxx=0;
        for(int j=1;j<=i;j++)
        {
            if(a[i].first<=a[j].second.first)
            {

                    maxx=(f[j]+1);
            }
        }
        f[i]=maxx+1;
    }
    int vt;
    int kq=f[1];
    for(int i=2;i<=n;i++)
    {
        if(kq<f[i])
            {
                kq=f[i];
                vt=i;
            }
    }

    cout<<kq<<'\n';
    for(int i=kq-1;i>0;i--)
    {
        for(int j=vt-1;j>0;j--)
        {
            if(a[vt].first>=a[i].second.first && f[i]=1)
            {
                vt=i;
                f[vt]=-f[vt];
                break;
            }
        }
    }

    for(int i=1;i<n;i++)
    {
        if(f[i]<0)
        {
            cout<<a[i].second.second<<endl;
        }
    }
    return 0;
}
