#include <bits/stdc++.h>

using namespace std;
bool scp (long long n)
{
    long long x=sqrt(n);
    if(x*x==n) return true;
    else return false;
}
long long fibo(long long n)
{
    if(n==1||n==2) return 1;
    return fibo(n-2)+fibo(n-1);
}
bool P(100000008)
int main()
{
    long long n,a=0,b=0,c=0,d=2;
    cin>>n;
    memset(P,true,sizeof(P));
    P[0]=P[1]=false;
    for(int i=2; i<=n; i++)
        if (P[i]==true)
        for(int j=2;j*i<=n;j++)
        P[i*j]=false;
    for(int i=1; i<=n; i++)
    {
        if(P[i] !=true && i>2) a++;



    }
    return 0;
}
