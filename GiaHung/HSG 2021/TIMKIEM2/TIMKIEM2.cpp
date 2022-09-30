#include <bits/stdc++.h>

using namespace std;
long long A[100001];
int main()
{
    freopen("TIMKIEM2.INP","r",stdin);
    freopen("TIMKIEM2.OUT","w",stdout);
    long long n,k,dem,x;
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>A[i];
    for(int h=1;h<=k;h++){
        cin>>x;dem=0;
        for(int i=1;i<=n;i++)if(x==A[i])dem++;
        if(dem==0)cout<<"NO"<<'\n';
        else cout<<"YES"<<'\n';
    }
    return 0;
}
