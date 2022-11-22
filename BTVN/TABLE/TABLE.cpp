#include <bits/stdc++.h>

using namespace std;
double a,b,c,d,x,y,z,w,maxx;
int main()
{
    //freopen("TABLE.INP", "r", stdin);
    //freopen("TABLE.OUT", "w", stdout);
    cin >> a >> b >> c >> d;
    x = (a / c) - (b / d);
    y = (c / d) - (a / b);
    z = (d / b) - (c / a);
    w = (b / a) - (d / c);
    maxx = x;
    int kq = 0;
    if (maxx < y)
    {
        maxx = y;
        kq = 1;
    }
    if (maxx < z)
    {
        maxx = z;
        kq = 2;
    }
    if (maxx < w)
    {
        maxx = w;
        kq = 3;
    }
    cout << kq;
    
}

