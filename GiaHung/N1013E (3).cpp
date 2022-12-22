#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("N1013E.inp","r",stdin);
    freopen("N1013E.out","w",stdout);
    int n,s=0;
    cin>>n;
    for(int i=1;i<=n;i++) s=s+n/i;
    cout<<s;
}
