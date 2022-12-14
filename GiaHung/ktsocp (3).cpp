#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("ktsocp.inp","r",stdin);
    freopen("ktsocp.out","w",stdout);
    long long n;
    int t;
    cin>>n;
    t=sqrt(n);
    if (t*t==n) cout<<"Co";else cout<<"Khong";
}
