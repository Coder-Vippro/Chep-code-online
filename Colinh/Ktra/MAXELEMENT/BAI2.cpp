#include <bits/stdc++.h>
using namespace std;
int maxx=-1e9;
int n;
int x;
int main()
{
    freopen("BAI2.INP","r",stdin);
    freopen("BAI2.INP","w",stdout);
    cin>>n;
    while(n--)
    {
        cin>>x;
        if(x>maxx)
        maxx=x;
    }
    cout<<maxx;
}