#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("BAICB2.inp","r",stdin);
    freopen("BAICB2.out","w",stdout);
    int a;cin>>a;
    if(a<=30)cout<<a*4000+5000;
    else cout<<5000+4000*30+(a-30)*3000;
    return 0;
}
