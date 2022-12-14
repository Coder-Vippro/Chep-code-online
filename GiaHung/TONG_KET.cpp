#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TONG_KET.inp","r",stdin);
    freopen("TONG_KET.out","w",stdout);
    int m,n,xs,g,k;
    cin>>n>>k;
    m=n/2;
    xs=m/(k+1);
    g=xs*k;
    k=n-g-xs;
    cout<<xs<<" "<<g<<" "<<k;
}
