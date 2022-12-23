#include <bits/stdc++.h>

using namespace std;
string a, b;
stringstream s;
int main()
{
   freopen("MISTAKE.INP", "r", stdin);
   freopen("MISTAKE.OUT", "w", stdout);
    cin >> a >> b;
    int x, y, n, k;
    for (int i = 0; i <= a.size(); i++)
    {
        if (a[i] == '6') a[i] = '5';
    }
    for (int i = 0; i <= b.size(); i++)
    {
        if (b[i] == '6') b[i] = '5';
    }
    s<<a; s>> x;
    s.clear();
    s << b; s >> y;
    s.clear();
    cout << x + y<<' ';
    for (int i = 0; i <= a.size(); i++)
    {
        if (a[i] == '5') a[i] = '6';
    }
    for (int i = 0; i <= b.size(); i++)
    {
        if (b[i] == '5') b[i] = '6';
    }
    s << a; s >> n;
    s.clear();
    s << b; s >> k;
    s.clear();
    cout << n + k;
}
