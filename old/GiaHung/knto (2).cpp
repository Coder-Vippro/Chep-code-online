#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio();
    cin.tie();
    cout.tie();
    freopen("knto.inp","r",stdin);
    freopen("knto.out","w",stdout);
    long long n;
    cin >> n;
    long long dem = 0;
    for(long long i = 1; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
           if(i * i == n) dem += 1;
           else dem += 2;
        }
    }
    long long d = 0;
    for(long long i = 2; i <= n; i++)
    {
        if(n % i == 0)
        {
           d++;
           while(n % i == 0)
           {
               n /= i;
           }
        }
    }
    cout << dem - d;
    return 0;
}
