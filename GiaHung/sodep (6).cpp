#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("sodep.inp","r",stdin);
    freopen("sodep.out","w",stdout);
    int n,kq=0;
    cin>>n;
    while(n>0)
    {
        kq=kq+n%10;
        n=n/10;
    }
    if(kq%10==9) cout<<"YES";
    else cout<<"NO";
    return 0;
}
