#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("max_cs.inp","r",stdin);
    freopen("max_cs.out","w",stdout);
    int a;
    cin>>a;
    cout<<max(a/100,max(a%100/10,a%10));
    return 0;
}
