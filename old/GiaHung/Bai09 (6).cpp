#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("Bai09.inp","r",stdin);
    freopen("Bai09.out","w",stdout);
   int n;
    cin>>n;
    float a[n+1],b;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b=a[i]-int(a[i]);
        cout<<1/b<<endl;
    }
    return 0;
}
