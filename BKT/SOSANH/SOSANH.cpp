#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("SOSANH.INP","r",stdin);
    freopen("SOSANH.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long a,b;
    cin>>a>>b;
    if(a>b)
    {
        cout<<'>';
    }
    if(a<b)
    {
        cout<<'<';
    }
    if(a==b)
    {
        cout<<'=';
    }
    
}