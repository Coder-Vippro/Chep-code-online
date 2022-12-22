#include <bits/stdc++.h>
using namespace std;
int n;
int x;
int minn=1e9;
int main()
{
    freopen("MINELEMENT.INP","r",stdin);
    freopen("MINELEMENT.OUT","w",stdout);
    cin>>n;
    while(n--)
    {
        cin>>x;
        if(x<minn)
        minn=x;
    }
    cout<<minn;
}