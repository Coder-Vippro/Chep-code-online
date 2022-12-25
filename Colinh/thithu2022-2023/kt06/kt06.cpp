#include <bits/stdc++.h>
#define N int (1e7)
using namespace std;
int p[N+5];
void sangnt(int n)
{
    fill(p,p+n+1,1);
    p[0]=p[1]=0;
    for(int i=2;i*i<=n;i++)
    {
        if(p[i]==1)
        for(int j=i*i;j<=n;j+=i) p[j]=0;
    }
}
int n,k;
vector<int>v;
int main()
{
    freopen("kt06.INP","r",stdin);
    freopen("kt06.OUT","w",stdout);
    cin>>k;
    sangnt(32001);
    while(cin>>n)
    {
        v.push_back(n);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        if(v[i]!=v[i+1] && p[v[i]]==true)
        {
            cout<<v[i]<<' ';
            k--;
        }
        if(k==0)
        {
            return 0;
        }
    }

}