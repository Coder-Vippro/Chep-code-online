#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("phicong.inp","r",stdin);
    freopen("phicong.out","w",stdout);
    int a[105],n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(int i=n-1;i>=n-k;i--) cout<<a[i]<<" ";
    return 0;
}
