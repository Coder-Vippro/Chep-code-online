#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("prime3.inp","r",stdin);
    freopen("prime3.out","w",stdout);
    long long n;
    int dem=0;
    cin>>n;
    for(int i=1;i<=n;i++)
       if(n%i==0) dem++;
    if(dem==2 && n>1) cout<<"yes";
    else cout<<"no";
    return 0;
}
