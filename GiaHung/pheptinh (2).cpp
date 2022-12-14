#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("pheptinh.inp","r",stdin);
    freopen("pheptinh.out","w",stdout);
    double a,b;
    cout<<fixed<<setprecision(2);
    char c;
    cin>>a>>b>>c;
    if(c=='/') cout<<a/b;
    else if(c=='+') cout<<a+b;
    else if(c=='-') cout<<a-b;
    else cout<<a*b;
    return 0;
}
