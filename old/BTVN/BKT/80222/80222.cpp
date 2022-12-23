#include <bits/stdc++.h>
using namespace std;
bool ktcp(long long n)
{
    long long k=sqrt(n);
    if(k*k==n)
    return true;
    else return false;
    return false;
}
bool kt(long long k)
{
    for(long long i=k;i>1;i--)
    {
        if(k%i==0 && ktcp(i)==true)
        return false;
    }
    return true;
}
long long n;
int main()
{
    freopen("80222.INP","r",stdin);
    freopen("80222.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    while(cin>>n)
    for(long long i=n;i>1;i--)
    {
        if(n%i==0 && kt(i)==true)
        {cout<<i<<endl;break;}
    }
    return 0;
}