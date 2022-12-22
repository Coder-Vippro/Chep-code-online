#include <bits/stdc++.h>
using namespace std;
bool ktnt(int n)
{
    if(n<2)
    return false;
    if(n==2)
    return true;
    int dem=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        dem++;
    }
    if(dem==2)
    return true;
    else return false;
}
bool ktsnt(int k)
{
    if(ktnt(k)==false)
    return false;
    while(k>0)
    {
        if(ktnt(k)==false)
        return false;
        k=k/10;
    }
    return true;
}
int main()
{
    freopen("SPRIME.INP","r",stdin);
    freopen("SPRIME.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=n;i<=m;i++)
    if(ktsnt(i)==true)
    {
        cout<<i<<'\n';
    }
    return 0;
}