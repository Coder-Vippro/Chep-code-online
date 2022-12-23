#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio();
    cin.tie();
    cout.tie();
    freopen("special.inp","r",stdin);
    freopen("special.out","w",stdout);
    long long n;
    cin >> n;
    long long a[n];
    for(long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    long long t = 0;
    for(long long i = 0; i < n; i += 2)
    {
        if(a[i] != a[i + 1])
        {
            t = a[i];
            i++;
        }
    }
    cout << t;
    return 0;
}
