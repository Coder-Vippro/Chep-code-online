#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("tim_max.inp","r",stdin);
    freopen("tim_max.out","w",stdout);
    int n;
    cin>>n;
    int a[n],somin;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    cout<<a[n-1];
    return 0;
}

