#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("ucongv.inp","r",stdin);
    freopen("ucongv.out","w",stdout);
    int a,u,v;
    cin>>a;
    if(a%2==0)
    {
        u=a/2;
        v=a/2;
        cout<<u<<" "<<v;
    }
    else
    {
        u=((a-1)/2);
        v=((a-1)/2)+1;
        cout<<u<<" "<<v;
    }
    return 0;
}
