

#include <bits/stdc++.h>

using namespace std;
int main()
{
    freopen("SUM.INP", "r", stdin);
    freopen("SUM.OUT", "w", stdout);
    int x;
    int dem = 0;
    while (cin >> x)
    {
        for (int a = 1; a <= x; a++)
        {
            for (int b = a; b <= x; b++)
            {
                for (int c = b; c <= x; c++)
                {
                    int d = x - a - b - c;
                    if (d >= c)
                        dem++;
                        
                            
                }
            }

        }
    cout << dem<<endl;
    dem = 0;
}
}
