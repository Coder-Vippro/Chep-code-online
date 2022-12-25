#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    freopen("Demcap.INP","r",stdin);
    freopen("Demcap.OUT","w",stdout);
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
    if((kq-2)%2==0)
    cout<<kq-5;
    else cout<<kq-3;
    return 0;
}

