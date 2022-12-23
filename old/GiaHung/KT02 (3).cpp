#include <bits/stdc++.h>
using namespace std;
int n,dnt=0,ddx=0,dsmm=0,dcp=0;
bool nt(int n)
{
    if(n<2)return false;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)return false;
    return true;
}
bool dx(int n)
{
    stringstream ss;string s,x="";
    ss<<n;ss>>s;
    for(int i=s.size()-1;i>=0;i--)x=x+s[i];
    return(x==s);
}
bool smm(int n)
{
    int m=n,t=0;
    if(n==0)return true;
    while(n!=0)
    {
        t+=n%10;
        n/=10;
    }
    if(m%t==0)return true;
    return false;
}