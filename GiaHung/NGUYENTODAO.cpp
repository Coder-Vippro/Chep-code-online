#include <bits/stdc++.h>

using namespace std;
bool ntdao(long long n)
{
    int t=0;
    while(n>0)
    {
        t=t*10+n%10;
        n/=10;
    }
    if(t<2) return false;
    if(t==2) return true;
    if(t>2)
    {
        for(int i=2;i<=sqrt(t);i++)
        if(t%i==0) return false;
        return true;
    }
}
int main()
{
    freopen("NGUYENTODAO.inp","r",stdin);
    freopen("NGUYENTODAO.out","w",stdout);
    int p,q;
    cin>>p>>q;
    for(int i=p;i<=q;i++)
    if(ntdao(i)) cout<<i<<endl;
    return 0;
}