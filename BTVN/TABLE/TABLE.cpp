#include <bits/stdc++.h>

using namespace std;
float a,b,c,d,maxx;
int main()
{
    freopen("TABLE.INP", "r", stdin);
    freopen("TABLE.OUT", "w", stdout);
    cin >> a >> b >> c >> d;
    float x = (a / c) - (b / d);
    float y = (c / d) - (a / b);
    float z = (d / b) - (c / a);
    float w = (b / a) - (d / c);
    maxx = x;
    int kq = 0;
    if (maxx < y)
    {
        maxx = y;
        kq = 1;
    }
    else if (maxx < z)
    {
        maxx = z;
        kq = 2;
    }
    else if (maxx < w)
    {
        maxx = w;
        kq = 3;
    }
    cout << kq;
    
}

