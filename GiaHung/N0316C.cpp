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
    int n;
    cin>>n;
    cout<<F(n)<<endl;
    return 0;
}
