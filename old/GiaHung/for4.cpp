#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("for4.inp","r",stdin);
    freopen("for4.out","w",stdout);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0) cout<<i<<" ";
    }
    return 0;
}
