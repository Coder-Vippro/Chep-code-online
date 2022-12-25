#include <bits/stdc++.h>
using namespace std;
long long n;
int main()
{
    freopen("Demuoc.INP","r",stdin);
    freopen("Demuoc.OUT","w",stdout);
    cin>>n;
    int kq=1;
    int i=2;
    int dem=0;
    while(i<=n)
    {
        while(n%i==0)
        {n=n/i;dem++;}
        kq=kq*(dem+1);
        dem=0;
        i++;
    }
    cout<<kq;
    return 0;
}

