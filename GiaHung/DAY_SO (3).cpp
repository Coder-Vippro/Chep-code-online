#include <bits/stdc++.h>

using namespace std;
int F(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return F(n - 1) - 2*F(n - 2);
}

int main()
{
    freopen("Day_So.inp","r",stdin);
    freopen("Day_So.out","w",stdout);
    int n;
    cin>>n;
    cout<<F(n);
    return 0;
}
