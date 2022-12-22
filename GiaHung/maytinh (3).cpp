#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("maytinh.inp","r",stdin);
    freopen("maytinh.out","w",stdout);
    double a,b,n;
    cin>>a>>b>>n;
    if (a*b==n) cout<<"*";
    else if (a+b==n) cout<<"+";
    else if (a-b==n) cout<<"-";
    else if (a/b==n) cout<<"/";
    else cout<<"NO";
    return 0;
}
