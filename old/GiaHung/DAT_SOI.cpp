#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("DAT_SOI.inp","r",stdin);
    freopen("DAT_SOI.out","w",stdout);
    int n,s=2;
    cin>>n;
    for(int i=1;i<=n;i++){
        s=s%10+(s-1)%10;
    }
    cout<<s%10;
    return 0;
}
