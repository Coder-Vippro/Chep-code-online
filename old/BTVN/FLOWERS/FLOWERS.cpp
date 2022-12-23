#include <bits/stdc++.h>
using namespace std;
int n;
int kq=1;
int dem=0;
int maxx=0;
int A[10001];
int temp;
int main()
{
    //freopen("FLOWERS.INP","r",stdin);
    //freopen("FLOWERS.OUT","w",stdout);
    cin>>n;
    int k;
    for(int i=1;i<=n;i++)
    {
        cin>>k;
        if(k!=temp){temp=k;kq++;dem=0;}
        if(k==temp)dem++;
        if(dem==3)
        {
            if(kq>maxx)
            maxx=kq;
            dem=0;
            kq=1;
        }
    }
    cout<<maxx;
}