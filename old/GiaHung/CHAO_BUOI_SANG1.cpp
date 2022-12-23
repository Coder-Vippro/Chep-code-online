
#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("CHAO_BUOI_SANG1.inp","r",stdin);
    freopen("CHAO_BUOI_SANG1.out","w",stdout);
    float a,b,x,y;
    cin>>a>>b>>x>>y;
    if(a<x)cout<<"TI";
    else if(a>x)cout<<"TEO";
    else if(b<=y)cout<<"TI";
    else cout<<"TEO";
    return 0;
}
