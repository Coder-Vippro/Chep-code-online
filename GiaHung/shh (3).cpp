#include <bits/stdc++.h>

using namespace std;
bool shh(int n)
{
    int t=1;
    for(int i=2;i<=(n+1)/2;i++)
    {
        if(n%i==0)t=t+i;
        if(t>n)return false;
    }
    if(t==n)return true;
    return false;
}
int main()
{
    freopen("shh.inp","r",stdin);
    freopen("shh.out","w",stdout);
    int n,d=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        if(shh(a))d++;
    }
    cout<<d;
    return 0;
}
