#include <bits/stdc++.h>
using namespace std;
bool kt(int n)
{
    int tong=0;
    while(n>0)
    {
        tong=tong+n%10;
        n=n/10;
    }
    if(tong%2==0)
    return true;
    return false;
}
int main()
{
    freopen("QUASI.INP","r",stdin);
    freopen("QUASI.OUT","w",stdout);
    int n,k;
    cin>>n>>k;
    int dem=0;
    if(n==1)
    dem++;
    for(int i=k;i<=n;i++)
    {
        if(kt(i)==true)
        {
            dem++;
        }
    }
    cout<<dem;
}