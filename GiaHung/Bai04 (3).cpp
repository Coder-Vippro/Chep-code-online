#include <bits/stdc++.h>

using namespace std;
long n,k,m,dem,s;

int main()
{
    freopen("Bai04.inp","r",stdin);
    freopen("Bai04.out","w",stdout);
    cin>>n>>k>>m;
    dem=0;
    s=0;
    while(n>0)
    {
        dem++;
        n=n-k;
        s=s+k;
        k=k+m;
    }
    cout<<dem<<" "<<s;
    return 0;
}
