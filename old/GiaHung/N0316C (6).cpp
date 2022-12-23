#include <bits/stdc++.h>
using namespace std;
int F(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return F(n - 1) + F(n - 2);
}
int main()
{
    freopen("N0316C.inp","r",stdin);
    freopen("N0316C.out","w",stdout);
    int a[50],n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++)
        cout<<F(a[i])<<endl;
    return 0;
}
