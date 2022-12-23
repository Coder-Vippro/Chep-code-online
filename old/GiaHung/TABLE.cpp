

#include <bits/stdc++.h>

using namespace std;
float a,b,c,d;
int main()
{
   freopen("TABLE.INP", "r", stdin);
   freopen("TABLE.OUT", "w", stdout);
    cin >> a >> b >> c >> d;
    float x = (a / c) - (b / d);
    float y = (c / d) - (a / b);
    float z = (d / b) - (c / a);
    float w = (b / a) - (d / c);
    float Max = x;
    int vt = 1;
    if (Max < y)
    {
        Max = y;
        vt = 2;
    }
    else if (Max < z)
    {
        Max = z;
        vt = 3;
    }
    else if (Max < w)
    {
        Max = w;
        vt = 4;
    }
    cout << vt;
    
}

