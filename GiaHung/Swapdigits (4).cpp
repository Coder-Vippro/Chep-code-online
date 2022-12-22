#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("Swapdigits.inp","r",stdin);
    freopen("Swapdigits.out","w",stdout);
    long long n;
    cin>>n;
    int hc=n/10,hdv=n%10;
    cout<<hdv*10+hc;
    return 0;
}
