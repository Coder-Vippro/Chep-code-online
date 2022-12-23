#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("BAI01.inp","r",stdin);
    freopen("BAI01.out","w",stdout);
    long long n,s=0;
    cin>>n;
    for(long i=1;i<=n;i++){
        s=s+i;
    }
    cout<<s;
}
