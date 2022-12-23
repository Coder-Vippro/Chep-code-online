#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("THE_KY.inp","r",stdin);
    freopen("THE_KY.out","w",stdout);
    int a;
    cin>>a;
    if(a%100==0) cout<<a/100;
    else cout<<a/100+1;
    return 0;
}
