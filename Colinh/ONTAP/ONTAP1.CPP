#include <bits/stdc++.h>
using namespace std;
int so[] = {1,1,2,6,4,2,2,4,2,8};
int kt(int n)
{
    if (n < 10)return so[n];
    if (((n/10)%10)%2==0)
    return (6*kt(n/5)*so[n%10])%10;
    else return (4*kt(n/5)*so[n%10]) % 10;
}
bool kt1(int n)
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
    //freopen("ONTAP1.INP","r",stdin);
    //freopen("ONTAP1.OUT","w",stdout);
    cin>>n;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    if(kt1(n)==true)
    {
        cout<<"YES"<<'\n';
    }
    else cout<<"NO"<<'\n';
    cout<<maxx<<'\n';
    cout<<kt(n);
}