
#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("CHAO_BUOI_SANG2.inp","r",stdin);
    freopen("CHAO_BUOI_SANG2.out","w",stdout);
    long long a,b,x,y,n;
    cin>>n;
    for(int i=1;i<=n;i++){
    cin>>a>>b>>x>>y;
    if(a<x)cout<<"TI";
    else if(a>x)cout<<"TEO";
    else if(b<=y)cout<<"TI";
    else cout<<"TEO";
    cout<<endl;
    }
    return 0;
}
