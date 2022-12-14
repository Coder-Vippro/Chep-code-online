#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("fishfinding.inp","r",stdin);
    freopen("fishfinding.out","w",stdout);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a>b&&b>c&&c>d) cout<<"Fish Diving";
    else if(a<b&&b<c&&c<d) cout<<"Fish Rising";
    else if(a==b&&b==c&&c==d) cout<<"Constant Depth";
    else cout<<"No Fish";
    return 0;
}
