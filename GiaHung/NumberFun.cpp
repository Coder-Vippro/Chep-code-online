#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("NumberFun.inp","r",stdin);
    freopen("NumberFun.out","w",stdout);
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b==c) cout<<"yes";
    else if(a-b==c) cout<<"yes";
    else if(a*b==c) cout<<"yes";
    else if(a/b==c) cout<<"yes";
    else if(b-a==c) cout<<"yes";
    else if(b/a==c) cout<<"yes";
    else cout<<"no";
    return 0;
}
