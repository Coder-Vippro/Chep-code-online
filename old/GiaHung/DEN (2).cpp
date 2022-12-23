#include <bits/stdc++.h>

using namespace std;
long long chuyen(long long n)
{
    long long t=0;
    while(n>0)
    {
        if(n%10==0) t=t+6;
        if(n%10==1) t=t+2;
        if(n%10==2) t=t+5;
        if(n%10==3) t=t+5;
        if(n%10==4) t=t+4;
        if(n%10==5) t=t+5;
        if(n%10==6) t=t+6;
        if(n%10==7) t=t+3;
        if(n%10==8) t=t+7;
        if(n%10==9) t=t+6;
        n=n/10;
    }
    return t;
}
int main()
{
    freopen("den.inp","r",stdin);
    freopen("den.out","w",stdout);
    long long a,b,t=0;
    while(cin>>a>>b)
    {
    for(int i=a;i<=b;i++)
        t=t+chuyen(i);
    cout<<t<<endl;
    t=0;
    }
    return 0;
}
