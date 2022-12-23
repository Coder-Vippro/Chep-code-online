#include <bits/stdc++.h>
using namespace std;
char chia(long long a,long long b)
{
    char c;
    a%=b;
    for(int i=0;i<=21;i++)
    {
        c=(char)(((a*10)/b)+48);
        a=(a*10)%b;
    }
    return c;
}
long long a,b;
int main()
{
    freopen("BAI60922.INP","r",stdin);
    freopen("BAI60922.OUT","w",stdout);
    cin>>a>>b;
    cout<<chia(a,b);
    return 0;
}