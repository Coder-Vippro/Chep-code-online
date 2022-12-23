#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("Sumdivisors.inp","r",stdin);
    freopen("Sumdivisors.out","w",stdout);
    int n,s=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        if(n%i==0) s=s+i;
    cout<<s;
    return 0;
}
