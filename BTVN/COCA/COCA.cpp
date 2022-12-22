
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("COCA.INP", "r", stdin);
    //freopen("COCA.OUT", "w", stdout);
    long long a,b,c;
    cin>>a>>b>>c;
    long long k=a+b;
    long long dem=0;
    while(k>=c)
    {
        dem=dem+k/c;
        k=k/c+k%c;
    }
    cout<<dem;
    return 0;
}