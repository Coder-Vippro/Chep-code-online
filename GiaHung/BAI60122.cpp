#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("BAI60122.inp","r",stdin);
    freopen("BAI60122.out","w",stdout);
    int a,s=1;
    cin>>a;
    for(int i=2;i<=a;i++)s=s+i*i;
    cout<<s;
    return 0;
}
