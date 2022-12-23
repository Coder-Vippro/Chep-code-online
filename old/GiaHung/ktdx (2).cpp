#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("ktdx.inp","r",stdin);
    freopen("ktdx.out","w",stdout);
    int n,sodao=0,luu;
    cin>>n;
    luu=n;
    while (n>0)
    {
    sodao=sodao*10+n%10;
    n=n/10;
    }
    if(sodao==luu) cout<<"YES";else cout<<"NO";
    return 0;
}
