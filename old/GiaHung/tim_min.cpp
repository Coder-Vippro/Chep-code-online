#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("tim_min.inp","r",stdin);
    freopen("tim_min.out","w",stdout);
    int n;
    cin>>n;
    int a[n],somin;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    cout<<a[0];
    return 0;
}

