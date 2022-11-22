#include <bits/stdc++.h>

using namespace std;
float a,b,c,d,x,y,z,w,maxx;
int main()
{
    freopen("TABLE.INP", "r", stdin);
    freopen("TABLE.OUT", "w", stdout);
    cin >> a >> b >> c >> d;
    x = (a / c) - (b / d);
    y = (c / d) - (a / b);
    z = (d / b) - (c / a);
    w = (b / a) - (d / c);
    maxx = x;
    int kq = 1;
    if (maxx < y)
    {
        maxx = y;
        kq = 2;
    }
    else if (maxx < z)
    {
        maxx = z;
        kq = 3;
    }
    else if (maxx < w)
    {
        maxx = w;
        kq = 4;
    }
    cout << kq;
    
}

