#include <bits/stdc++.h>

using namespace std;

int Fibonacci(int n)
{
    int a1 = 1, a2 = 1;
    if (n == 1 || n == 2)
        return 1;
    int i = 3, a;
    while (i <= n)
    {
        a = a1 + a2;
        a1 = a2;
        a2 = a;
        i++;
    }
    return a;
}
int main()
{
    freopen("N0427D.inp","r",stdin);
    freopen("N0427D.out","w",stdout);
    int n,s=0,dem=0;
    cin >> n;
    for(int i=0;s<=n;i++){
        s=s+Fibonacci(i);
        cout<<s;
        dem++;
    }
    cout<<dem;
    return 1;
}
