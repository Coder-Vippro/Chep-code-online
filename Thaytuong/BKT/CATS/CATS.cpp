#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("CATS.INP","r",stdin);
    freopen("CATS.OUT","w",stdout);
    int a,b,c;
    cin>>a>>b>>c;
    
    if(a+b>=c && c>=a)
    {
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}