/*#include <bits/stdc++.h>
using namespace std;
int a[100001],n,k,b;
int main()
{
    freopen("MANHINH.INP","r",stdin);
    freopen("MANHINH.OUT","w",stdout);
    long long t=0;
    cin>>n>>k>>b;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    if(b!=n)b=b%n;
    for(int i=1;i<=k;i++)
    {
        t+=a[b];
        b++;
        if(b>n)
        b=b%n;
    }
    cout<<t;
    return 0;
}*/
#include <iostream>
#include <utility>
#include <cmath>
#include <algorithm>
using namespace std;
int n,k,b;
long long kq=0;
int A[10001];
int main()
{
    freopen("MANHINH.INP","r",stdin);
    freopen("MANHINH.OUT","w",stdout);
    cin>>n>>k>>b;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    int vt=b%n;
    while(k--)
    {
        kq=kq+A[vt];
        vt++;
        if(vt>n)
        vt=1;
    }
    cout<<kq;
}