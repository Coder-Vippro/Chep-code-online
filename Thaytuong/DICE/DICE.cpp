#include <bits/stdc++.h>
using namespace std;
int findWays(int N)
{
    if (N == 0) 
    {
        return 1;
    }
    int cnt = 0;
    for (int i = 1; i <= 6; i++) 
    {
        if (N - i >= 0) 
        {
            cnt = cnt + findWays(N - i);
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
    cout << findWays(N);
    return 0;
}