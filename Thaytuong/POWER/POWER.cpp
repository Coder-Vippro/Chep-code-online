#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
int n,p,b;
int kq=1;
int main()
{
    freopen("POWER.INP","r",stdin);
    freopen("POWER.OUT","w",stdout);
    cin>>n;
    for(int b=2;b<=n;b++)
    {
        for(int p=b*b; p<=n;p*=b)
        {
            kq=max(kq,p);
        }
    }
    cout<<kq;
}