#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    freopen("rooms.inp","r",stdin);
    freopen("rooms.out","w",stdout);
    long long n,g,a[10001],vt=0;
    vector<int>p;
    cin>>n>>g;
    for(int i=0;i<n;i++) p.push_back(0);
    for(int i=0;i<g;i++)
        cin>>a[i];
    for(int i=0;i<g;i++)
    {
        while(a[i]>=2)
        {
            a[i]=a[i]-2;
            p[vt]=2;
            vt++;
        }
        if(a[i]>0)
        {
            a[i]--;
            p[vt]=1;
            vt++;
        }
        if(vt==p.size())
        {
            vt=0;
            long long gg=i;
            while(gg<g)
            {
                for(int o=0;o<p.size();o++)
                {
                    if(a[gg]>0)
                    {
                        if(p[o]!=2)
                        {
                            p[o]++;
                            a[gg]--;
                        }
                    }
                }
                gg++;
            }
            break;
        }
    }
    for(int i=0;i<p.size();i++) cout<<p[i]<<endl;
    return 0;
}
