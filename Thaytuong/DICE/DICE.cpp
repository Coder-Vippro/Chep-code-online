#include <bits/stdc++.h>
using namespace std;
long long n;
long long f[10000001];
long long M=1e9+7;
long long dem(int n)
{
    f[1]=1;
    f[2]=2;
    f[3]=4;
    f[4]=8;
    f[5]=16;
    f[6]=32;
    for (int i = 7; i <= n; i++)
    {
        f[i]=(f[i-1]+f[i-2]+f[i-3]+f[i-4]+f[i-5]+f[i-6])%M;
    }
    return f[n]%M;
}
int main()
{
    freopen("DICE.INP", "r", stdin);
    freopen("DICE.OUT", "w", stdout);
    int n;
    cin>> n;
    cout<<dem(n);
    return 0;
    
}