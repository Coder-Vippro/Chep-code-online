#include <bits/stdc++.h>
using namespace std;
int dem(int n)
{
    if (n == 0) 
    {
        return 1;
    }
    int cnt = 0;
    for (int i = 1; i <= 6; i++) 
    {
        if (n - i >= 0) 
        {
            cnt = cnt + dem(n - i);
        }
    }
    return cnt;
}
int main()
{
    freopen("DICE.INP","r",stdin);
    freopen("DICE.OUT","w",stdout);
    int n;
    cin>>n;
    cout<<dem(n);
    return 0;
}