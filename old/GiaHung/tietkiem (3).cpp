#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("tietkiem.inp","r",stdin);
    freopen("tietkiem.out","w",stdout);
    double a,b;
    int thang=0;
    cin>>a>>b;
    while(a<b)
    {
        a=a*1.0025;
        thang++;
    }
    cout<<thang;
    return 0;
}
