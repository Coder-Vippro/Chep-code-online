#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("appleBox.inp","r",stdin);
    freopen("appleBox.out","w",stdout);
    long long n,a,b,t=0,d=0;
    cin>>n;
    if(n%2==1)
    {
        a=n;
        b=n-1;
    }
    else
    {
        a=n-1;
        b=n;
    }
    for(int i=0;i<=b;i=i+2)  t=t+i;
    for(int i=1;i<=a;i=i+2) d=d+i;
    cout<<t-d;
    return 0;
}
