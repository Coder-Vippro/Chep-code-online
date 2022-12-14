#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio();
    cin.tie();
    cout.tie();
    freopen("tienhoa.inp","r",stdin);
    freopen("tienhoa.out","w",stdout);
    long long n;
    cin >> n;
    long long o = n;
    string f[n];
    long long v[n];
    long long dem = 0;
    string s;
    long long a,b,c;
    long long k=0,m=0;
    long long Max = 0;
    while(n > 0)
    {
        cin >> s;
        f[k] = s;
        k++;
        cin >> a >> b >> c;
        long long d = 0;
        while(a >= b)
        {
           a -= b;
           a += c;
           d++;
        }
        if(k == o) cout << d;
        else cout << d << " ";
        if(Max < d)
        {
            Max = d;
            {
                v[m]=k;
                m++;
            }
        }
        dem += d;
        n--;
    }
    cout << endl << dem << endl << f[v[0]];
    return 0;
}
