#include <bits/stdc++.h>
using namespace std;
void findWays(int N)
{
    int dp[N + 1];
    dp[0] = 1;
    for (int i = 1; i <= N; i++)
        {
            dp[i] = 0;
            for (int j = 1; j <= 6; j++)
            {
                if (i - j >= 0)
                {
                        dp[i] = dp[i] + dp[i - j];    
                }
            }
        }
        cout << dp[N];
}
int main()
{
    freopen("DICE.INP", "r", stdin);
    freopen("DICE.OUT", "w", stdout);
    int n;
    cin>> n;
    findWays(n);
    return 0;
    //source code from https://www.geeksforgeeks.org/count-ways-to-obtain-given-sum-by-repeated-throws-of-a-dice/ 
}