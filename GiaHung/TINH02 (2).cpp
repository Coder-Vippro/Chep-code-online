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
    freopen("TINH02.inp","r",stdin);
    freopen("TINH02.out","w",stdout);
    int n;
    cin>>n;
        cout<<F(n+2);
    return 0;
}
