#include <bits/stdc++.h>
using namespace std;
int n;
bool ktnt(int n)
{
    int dem=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)dem++;
        if(dem>2)return false;
    }
    if(dem==2)return true;
    return false;
}
int main()
{
    freopen("SOUOC.INP","r",stdin);
    freopen("SOUOC.OUT","w",stdout);
    cin>>n;
    int kq=1;
    int i=2;
    int dem=0;
    while(i<=n)
    {
        if(ktnt(i)==1)
        {
            while(n%i==0)
            {n=n/i;dem++;}
        }
        kq=kq*(dem+1);
        dem=0;
        i++;
    }
    cout<<kq;
    return 0;
}