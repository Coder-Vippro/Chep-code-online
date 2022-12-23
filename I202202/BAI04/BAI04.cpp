#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    freopen("BAI04.INP","r",stdin);
    freopen("BAI04.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    int dem=0;
    for(int i=2;i<=n;i++)
    {
        int m=2*i;
        int x=sqrt(m);
        if(x*(x+1)==m)
        dem++;
    }
    cout<<dem;
}