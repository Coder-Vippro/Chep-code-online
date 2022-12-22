#include <bits/stdc++.h>
using namespace std;
long long F(long long n){long long s=0;
for(long long i=1;i<=n;i++)s=s+1;
return s*2;
}
int main()
{
    freopen("GIAO_DIEM.inp","r",stdin);
    freopen("GIAO_DIEM.out","w",stdout);
    long long a,n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;cout<<F(a)<<'\n';
    }
    return 0;
}
