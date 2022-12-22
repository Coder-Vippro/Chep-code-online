#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("tongs.inp","r",stdin);
    freopen("tongs.out","w",stdout);
    int n,s=0;
    cin>>n;
    for(int i=1;i<=n;i++) s=s+i*(i+2);
    cout<<s;
    return 0;
}
