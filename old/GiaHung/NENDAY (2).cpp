#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("NENDAY.inp","r",stdin);
    freopen("NENDAY.out","w",stdout);
    int a[10000],n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
       cout<<endl;
       int g=n-1;
       for(int i=0;i<n;i++){
       for(int i=1;i<=g;i++){
            a[i]=a[i]+a[i+1];
        cout<<a[i]<<" ";
       }
       cout<<'\n';g--;
    }
    return 0;
}
