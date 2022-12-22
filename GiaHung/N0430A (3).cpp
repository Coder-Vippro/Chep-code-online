#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("N0430A.inp","r",stdin);
    freopen("N0430A.out","w",stdout);
    int n,so[1000];
    cin>>n;
    for (int i=1;i<=n;i++) {
        cin>>so[i];
        if (so[i]<0) so[i]=0;
        cout<<so[i]<<" ";
    }
}
