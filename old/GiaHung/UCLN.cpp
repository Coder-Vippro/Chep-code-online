#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("UCLN.inp","r",stdin);
    freopen("UCLN.out","w",stdout);
    int n, m;
    cin >> n >> m;
    while(n!=m)
        if(n>m) n=n-m;
        else m=m-n;
         cout<<m;
    return 0;
}
