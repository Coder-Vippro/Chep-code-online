#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("CHIAHETK.inp","r",stdin);
    freopen("CHIAHETK.out","w",stdout);
    int n,k;
    cin>>n>>k;
    n--;
    while(n%k>0) n--;
    cout<<n;
    return 0;
}
