#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("chuottui.inp","r",stdin);
    freopen("chuottui.out","w",stdout);
    int x1,x2,v1,v2,x,v;
    cin>x1>>x2>>v1>>v2;
    x=x1-x2;v=v2-v1;
    if(x*v>0 && x%v==0) cout<<"YES";
    else cout<<"NO";
    return 0;
}
