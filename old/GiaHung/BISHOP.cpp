#include <bits/stdc++.h>

using namespace std;
int a,b,c,d;
int main()
{
    freopen("BISHOP.INP","r",stdin);
    freopen("BISHOP.OUT","w",stdout);
    cin>>a>>b>>c>>d;
    if(c-a+b==d)cout<<1;
    else cout<<-1;
    return 0;
}
