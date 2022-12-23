#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("CHUSOMAX.inp","r",stdin);
    freopen("CHUSOMAX.out","w",stdout);
    long long N,cs,csmax=0,dem=0;
    cin >> N;
    while(N>0)
    {
        dem++;
        cs=N%10;
        if(cs>csmax) csmax=cs;
        N=N/10;
    }
    cout<<dem<<endl<<csmax;
    return 0;
}
