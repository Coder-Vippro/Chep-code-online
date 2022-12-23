#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("pitago.inp","r",stdin);
    freopen("pitago.out","w",stdout);
    int a,b,c;
    cin>>a>>b>>c;
    if(a*a+b*b==c*c) cout<<"CO";
    else if(a*a+c*c==b*b) cout<<"CO";
    else if(b*b+c*c==a*a) cout<<"CO";
    else cout<<"KHONG";
    return 0;
}
