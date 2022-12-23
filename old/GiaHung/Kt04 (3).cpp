#include <bits/stdc++.h>
using namespace std;
long long n,m,i=2;
int main()
{
    freopen("KT04.inp","r",stdin);
    freopen("KT04.out","w",stdout);
    cin>>n>>m;
    while(n>1)
    {
        if(n%i==0)
        {
            while(n%i==0)n/=i;
            if(m%i!=0)
            {cout<<0;
            return 0;}
            while(m%i==0)m/=i;
        }
        i++;
    }
    if(m==1)cout<<1;
    else cout<<0;
    return 0;
}
a