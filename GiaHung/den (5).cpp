#include <bits/stdc++.h>
using namespace std;
int tinh(long long n)
{
    int d[10]={6,2,5,5,7,5,6,3,7,6};
    int t=0;
    while(n>0)
    {
        int cs=n%10;
        t=t+d[cs];
        n=n/10;
    }
    return t;
}
{
    freopen("den.inp","r",stdin);
    freopen("den.out","w",stdout);
    long long s,t,tong;
    while(cin>>s>>t)
    {
        tong=0
        for(int i=s;i<=t;i++)tong=tong+tinh(i);
        cout<<tong<<endl;
    }
    return 0;
}
