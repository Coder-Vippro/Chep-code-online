#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t,d=0,n;
    cin>>n;
    t=sqrt(n);
    for(int i=1;t<=n;i++)
   for(int j=i;j<=n;j++)
       for(int o=j;j<=n;j++)
         if(i*i+j*j+o*o==n&&i<=j&&j<=o)
        {
            cout<<i<<" "<<j<<" "<<o<<endl;
            d++;
         }cout<<d;
    return 0;
}
