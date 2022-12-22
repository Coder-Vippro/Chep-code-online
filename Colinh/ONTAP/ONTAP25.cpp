#include <bits/stdc++.h>
using namespace std;
int n,m;
int main()
{
    freopen("ONTAP25.INP","r",stdin);
    freopen("ONTAP25.OUT","w",stdout);
    cin>>n>>m;
    if(n>m)k=n;
    else k=m;
    while(k++)
    {
        if(k%m==0)
        {
            cout<<k;
            return 0;
        }
    }
}