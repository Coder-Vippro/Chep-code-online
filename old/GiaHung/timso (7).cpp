#include <bits/stdc++.h>
using namespace std;
int tcs(long long n)
{
    long long tcs=0;
    while(n>0)
    {
        tcs=tcs+n%10;
        n=n/10;
    }
    return tcs;
}
int main()
{
    freopen("timso.inp","r",stdin);
    freopen("timso.out","w",stdout);
    long long a,b,c,sl,t;
    while(cin>>a>>b>>c)
    {
            t=1;sl=0;
            for(int i=1;i<=a-1;i++) t=t*10;
            if(b%c==0)
              for(int i=t;i<t*10;i++)
                  if(tcs(i)==b) sl++;
            cout<<sl<<endl;
    }
    return 0;
}
