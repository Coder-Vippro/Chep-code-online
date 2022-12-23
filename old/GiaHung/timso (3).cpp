#include <bits/stdc++.h>

using namespace std;

int main()
{   freopen("timso.inp","r",stdin);
    freopen("timso.out","w",stdout);
    long long a,b,m=0,n=-1;
    cin>>a>>b;
    for(long long i=a;i<=b;i++)
        if(i%2==1) m=m+i;
    cout<<m<<endl;
    long long k=__gcd(a,b);
    cout<<a/k<<" "<<b/k<<endl;
    for(long long p=1;p<=sqrt(b);p++)
    {
        if(b%p==0&&b/p+p==a)
            {cout<<p<<" "<<b/p;
        n=0;break;}
    }if(n==-1) cout<<-1;
    return 0;
}
