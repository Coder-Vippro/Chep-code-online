#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("uocchan.inp","r",stdin);
    freopen("uocchan.out","w",stdout);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        if(n%i==0 && i%2==0) cout<<i<<" ";
    return 0;
}
