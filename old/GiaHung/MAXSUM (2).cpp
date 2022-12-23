#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("MAXSUM.inp","r",stdin);
    freopen("MAXSUM.out","w",stdout);
    long long a,b,s=0;
    cin>>a;
    for(long long i=1;i<=a;i++)
    {   cin>>b;
        if(i%2==0)s=s-b;
        if(i%2!=0) s=s+b;
    }cout <<s;
    return 0;
}
