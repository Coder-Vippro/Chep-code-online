#include <bits/stdc++.h>
using namespace std;
long long a,b;
int main()
{
    freopen("KHUYENMAI.INP","r",stdin);
    freopen("KHUYENMAI.OUT","w",stdout);
    cin>>a>>b;
    if(a*b>1000000)
    {
        cout<<a*b-a*b/100*10;
    }
    else cout<<a*b;
    return 0;
    ////
}