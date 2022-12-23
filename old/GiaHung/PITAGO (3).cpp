#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("PITAGO.inp","r",stdin);
    freopen("PITAGO.out","w",stdout);
    long long a,b,c,m,n,p;
    cin>>a>>b>>c;
    m=max(a,max(b,c));
    n=min(a,min(b,c));
    p=a+b+c-m-n;
    if(n*n+p*p==m*m) cout<<"CO";
    else cout<<"KHONG";
    return 0;
}
