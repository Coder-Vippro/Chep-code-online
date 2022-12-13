#include <bits/stdc++.h>
using namespace std;
int giaithua(int n)
{
    int tich=1;
    for(int i=1;i<=n;i++)
    {
        tich=tich*i;
    }
    return tich%10;
}
bool kt(int n)
{
    int tong=0;
    for(int i=1;i<=n;i++)
    {
        tong=tong+i;
        if(tong==n)return true;
        if(tong>n)return false;
    }
    return false;
}
int maxx(int n)
{
    int maxx=-1e9+1;
    while(n>0)
    {
        if(n%10>maxx)
            maxx=n%10;
        n=n/10;
    }
    return maxx;
}
int n;
int main()
{
    freopen("ONTAP1.INP","r",stdin);
    freopen("ONTAP1.OUT","w",stdout);
    cin>>n;
    if(kt(n)==true)
    {
        cout<<"YES"<<'\n';
    }
    else cout<<"NO"<<'\n';
    cout<<giaithua(n)<<'\n';
    cout<<maxx;
}