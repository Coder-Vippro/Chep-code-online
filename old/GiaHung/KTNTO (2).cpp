#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("ktnto.inp","r",stdin);
    freopen("ktnto.out","w",stdout);
    int n,dem;
    cin>>n;
    for(int i=1;i<=n;i++)
        if(n%i==0) dem++;
    if(dem<=2) cout<<"YES";else cout<<"NO";
    return 0;
}
