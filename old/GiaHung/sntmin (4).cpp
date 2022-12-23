#include <bits/stdc++.h>

using namespace std;
bool ktnt(long long n)
{
    if(n<2) return false;
    for(int i=2;i*i<=n;i++)
        if(n%i==0) return false;
    return true;
}
int main()
{
    freopen("sntmin.inp","r",stdin);
    freopen("sntmin.out","w",stdout);
    long long n;
    cin>>n;
    n++;
    while(ktnt(n)==false) n++;
    cout<<n;
    return 0;
}
