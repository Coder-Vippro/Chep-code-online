#include <bits/stdc++.h>

using namespace std;
bool ktnt(long long n)
{
    long long dem=0;
    for(long long i=1;i<=n;i++)
    {
        if(n%i==0)
            dem++;
    }
    if(dem==2)
        return true;
    else return false;
}
int main()
{
freopen("KNTO.INP","r",stdin);
freopen("KNTO.OUT","w",stdout);
long long n;
cin>>n;
long long dem=0;
for(long long i=1;i<=n;i++)
    if(ktnt(i)== false && n%i==0)
    {
        dem++;
    }
cout<<dem;

    return 0;
}
