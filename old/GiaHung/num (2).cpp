#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("num.inp","r",stdin);
    freopen("num.out","w",stdout);
    int n,m;
    cin>>n>>m;
    while(n%m!=0) n++;
    cout<<n;
    return 0;
}
