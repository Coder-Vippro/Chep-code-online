#include <bits/stdc++.h>
using namespace std;
long long ts[10000001];
int k[100001];
string s;
int maxx,minn;
int vt,vtmin;
int main()
{
    freopen("HOANVI.INP","r",stdin);
    freopen("HOANVI.OUT","w",stdout);
    cin>>s;
    k[0]=1;
    ts[s[0]]=1;
    for(int i=1;i<s.size();i++)
    {
        ts[s[i]]++;
        if(s[i]!=s[i-1] && ts[s[i]]==1)
        {
            k[i]=k[i-1]+1;
        }
        else 
        {
            k[i]=1;
            int n=s.size();
            for(int j=1;j<1000;j++)
            {
                ts[j]=0;
            }
        }
    }
    for(int i=1;i<=s.size();i++)
    {
        if(k[i]>k[i-1])
        {
            maxx=k[i];
            vt=i;
        }
        
    }
    for(int i=maxx+1;i<=vt-1;i++)
    {
        cout<<s[i];
    }
    return 0;
}