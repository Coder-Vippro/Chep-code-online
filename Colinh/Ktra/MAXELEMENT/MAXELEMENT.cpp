#include <bits/stdc++.h>
using namespace std;
int maxx=-1e9;
int n;
int x;
int main()
{
    freopen("MAXELEMENT.INP","r",stdin);
    freopen("MAXELEMENT.OUT","w",stdout);
    cin>>n;
    while(n--)
    {
        cin>>x;
        if(x>maxx)
        maxx=x;
    }
    cout<<maxx;
}