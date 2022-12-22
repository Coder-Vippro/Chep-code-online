#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("TONG_QUYLUAT.inp","r",stdin);
    freopen("TONG_QUYLUAT.out","w",stdout);
    long long n,kq=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if((i%3==0||i%5==0) && (i%15!=0))
            kq=kq+i;
    }
    cout<<kq;
    return 0;
}