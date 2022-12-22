#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("trans.inp","r",stdin);
    freopen("trans.out","w",stdout);
    int n,a,b,xb=0,tx=0;
    cin>>n>>a>>b;
    long long x=(n-1)/50+1,mi=x*a,so;xb=x;
    for(long long i=0;i<x;i++){
        so=n-50*i;
        if(so<=0) so=-3;
        if(mi>(((so-1)/4+1)*b+i*a)){
            mi=((so-1)/4+1)*b+i*a;
            xb=i;
            tx=(so-1)/4+1;
        }
    }
    cout<<xb<<" "<<tx;
    return 0;
}
