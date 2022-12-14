#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("oclit.inp","r",stdin);
    freopen("oclit.out","w",stdout);
    int a,b,ucln;
    cin>>a>>b;
    while(b!=a)
        if(a>b) a=a-b;
        else b=b-a;
    cout<<b;
    return 0;
}
