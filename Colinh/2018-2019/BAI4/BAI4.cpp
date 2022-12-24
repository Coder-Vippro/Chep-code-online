#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
using namespace std;
int kths(int n)
{
    int dem=1;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)dem++;
    }
    if(dem>2) return 1;
    return -1;
}
bool ktcp(int n)
{
    int k=sqrt(n);
    if(k*k==n)return true;
    return false;
}
int n;
int main()
{
    freopen("BAI4.INP","r",stdin);
    freopen("BAI4.OUT","w",stdout);
    cin>>n;
    int demhs=0,demcp=0;
    for(int i=0;i<=n;i++)
    {
        if(kths(i)==1)demhs++;
        if(ktcp(i)==true)demcp++;
    }
    cout<<demhs<<' '<<demcp;
}