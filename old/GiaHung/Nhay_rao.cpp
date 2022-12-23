#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("Nhay_rao.inp","r",stdin);
    freopen("Nhay_rao.out","w",stdout);
    long long n,k,a,ma;cin>>n>>k>>ma;
    for(long long i=1;i<n;i++){
        cin>>a;ma=max(ma,a);
    }
    cout<<ma-k;
    return 0;
}
