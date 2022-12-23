#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("THAYTHE.inp","r",stdin);
    freopen("THAYTHE.out","w",stdout);
    int a[10000],n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]>=0) cout<<a[i]<<" ";
        else cout<<"0 ";
    }
    return 0;
}
