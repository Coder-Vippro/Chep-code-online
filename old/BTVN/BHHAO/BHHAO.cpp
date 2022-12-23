#include <bits/stdc++.h>
using namespace std;
bool kt(long long n)
{
    long long tong=0;
    for(long long i=1;i<n;i++)
    {
        if(tong<n && n%i==0)
        {
            tong=tong+i;
        }
        if(tong==n)return true;
        if(tong>n)return false;
    }
    return false;
}
int dem=0;
int main()
{
    //freopen("BHHAO.INP","r",stdin);
    //freopen("BHHAO.OUT","w",stdout);
    long long n,k;
    cin>>n;
    while(n--)
    {
        cin>>k;
        if(kt(k)==true)
        dem++;
    }
    cout<<dem;
}