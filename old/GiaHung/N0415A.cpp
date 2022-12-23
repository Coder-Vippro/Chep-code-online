#include <bits/stdc++.h>
using namespace std;
long long a[1000001];
int main()
{
    freopen("N0415A.inp","r",stdin);
    freopen("N0415A.out","w",stdout);
    long long n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    cout<<a[0];
    return 0;
}
