#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("ONTAP26.INP","r",stdin);
    freopen("ONTAP26.OUT","w",stdout);
    float a,b;
    cin>>a>>b;
    if(a>b)
    {
        cout<<fixed<<setprecision(2)<<a-b;
    }
    else cout<<fixed<<setprecision(2)<<a/b;
}