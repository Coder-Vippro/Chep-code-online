#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("Shatteredcake.inp","r",stdin);
    freopen("Shatteredcake.out","w",stdout);
    int a,b,s=0,w,n;
    cin >>w>>n;
    for (int i=0;i<n;i++) {
            cin>>a>>b;
             s=s+a*b;
    }
    cout<<s/w;
    return 0;
}
