#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("sumodd2.inp","r",stdin);
    freopen("sumodd2.out","w",stdout);
    int x,y,s=0;
    cin>>x>>y;
    for(int i=min(x,y)+1;i<max(x,y);i++)
        if(i%2!=0) s=s+i;
    cout<<s;
    return 0;
}
