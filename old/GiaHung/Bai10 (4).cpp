#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("Bai10.inp","r",stdin);
    freopen("Bai10.out","w",stdout);
    cin>>n;
    int a[n+1],b;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a,a[1],a[n]);
    return 0;

}
