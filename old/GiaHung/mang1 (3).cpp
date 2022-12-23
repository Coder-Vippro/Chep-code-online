#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("mang1.inp","r",stdin);
    freopen("mang1.out","w",stdout);
    int a[10000],n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
        if(a[i]%2==0) cout<<a[i]<<endl;
    return 0;
}
