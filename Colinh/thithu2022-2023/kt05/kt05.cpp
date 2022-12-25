#include <bits/stdc++.h>
using namespace std;
long long a,b;
int main()
{
    freopen("kt05.INP","r",stdin);
    freopen("kt05.OUT","w",stdout);
    cin>>a>>b;
    long long k=(a*b/10)%10*10+a*b%10;
    if(k%3==0)
    {
        cout<<"YES";
    }
    else cout<<"NO";

} 

