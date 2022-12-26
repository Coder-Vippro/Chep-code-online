#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
vector <int> k;
vector <int> h;
int n,m;
int i=2;
int main()
{
    freopen("KT03.INP","r",stdin);
    freopen("KT03.OUT","w",stdout);
    cin>>n>>m;
    while(i<=n || i<=m)
    {
        if (n%i==0)
        {
            k.push_back(i);
        }
        while (n%i==0)
        {
            n=n/i;
        }
        if (m%i==0)
        {
            h.push_back(i);
        }
        while (m%i==0)
        {
            m=m/i;
        }
        i++;
    }
    int l;
    if(k.size()>h.size())
    {
        l=k.size();
    }
    else l=h.size();
    for(int i=0;i<l;i++)
    {
        if(k[i]!=h[i])
        {
            cout<<0;
            return 0;
        }
    }
    cout<<1;
    return 0;
}
