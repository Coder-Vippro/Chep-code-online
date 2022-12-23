#include<bits/stdc++.h>
using namespace std;
int numberMax(int n)
{
    freopen("XAU13.inp","r",stdin);
    freopen("XAU13.out","w",stdout);
    if (n == 0) return 0;
    n = abs(n);
    int s = 0;
    while (n > 0)
        {
        int k = n % 10;
        n /= 10;
        if (k > s)
        s = k;
    }
    return s;
}
int main()
{
    int x;
    cin >> x;
    cout << numberMax(x);
    return 0;
}
