#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("day_so.inp","r",stdin);
    freopen("day_so.out","w",stdout);
    int a;
    cin>>a;
    if(a%2==0)cout<<3*(a-1);
    else cout<<3*a-2;
    cout<<", ";
    for(int i=1;i<=a;i=i+2)
    {
        cout<<3*i-2<<" ";
    }
    return 0;
}
