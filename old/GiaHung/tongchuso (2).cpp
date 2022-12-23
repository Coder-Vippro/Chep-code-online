#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("tongchuso.inp","r",stdin);
    freopen("tongchuso.out","w",stdout);
    long long n,d=0;
    cin>>n;
    while (n>0)
    {
        d=d+n%10;n=n/10;
    }
    cout<<d;
    return 0;
}
