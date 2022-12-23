#include <bits/stdc++.h>

using namespace std;

int main()
{  freopen("den.inp","r",stdin);
freopen("den.out","w",stdout);
    long long bong[10]={6,2,5,5,4,5,6,3,7,6};
    long long a,b;

    while(cin>>a>>b)
    {long long t=0,i,m;
        for(i=a;i<b+1;i++)
    {  m=i;
        while (m!=0)
        {   long long k=m%10;
            m=m/10;
            t=t+bong[k];
        }
    } cout<<t<<endl;}
    return 0;
}
