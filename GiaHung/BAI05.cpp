#include <bits/stdc++.h>
using namespace std;
long long a[1000001];
int main()
{
    freopen("BAI05.inp","r",stdin);
    freopen("BAI05.out","w",stdout);
    long long n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    cout<<a[0]*a[1];
    return 0;
}
