#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("ucln.inp","r",stdin);
    freopen("ucln.out","w",stdout);
    int n,m;
    cin>>n>> m;
    while(n!=m)
        if(n>m) n=n-m;else m=m-n;
    cout<<m;
    return 0;
}
