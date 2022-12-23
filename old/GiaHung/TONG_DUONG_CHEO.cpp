#include<bits/stdc++.h>
using namespace std;
long long a[101][101];
int main()
{
    freopen("TONG_DUONG_CHEO.inp","r",stdin);
    freopen("TONG_DUONG_CHEO.out","w",stdout);
    long long n,chinh=0,phu=0,dh;
    cin>>n;
    dh=n+1;
    for(long long i=1;i<=n;i++)
    {
        for(long long j=1;j<=n;j++)
        {
            cin>>a[i][j];
            if(i+j==dh) phu+=a[i][j];
            if(i==j) chinh+=a[i][j];
        }
    }
    cout<<chinh<<endl<<phu;
}