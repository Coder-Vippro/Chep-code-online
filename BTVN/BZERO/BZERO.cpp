#include <bits/stdc++.h>
using namespace std; 
int main()
{
    freopen("BZERO.INP","r",stdin);
    freopen("BZERO.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n; 
    cin>>n; 
    int d=0; 
    while(n>=5)
    {
        n=n/5; 
        d=d+n; 
    }
   cout<<d; 
   return 0; 
}
