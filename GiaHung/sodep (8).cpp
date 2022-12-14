#include <bits/stdc++.h>

using namespace std;
long long kq[1000000];
long long tcs(long long n)
{
    long long t=0;
    while(n!=0)
    {
        t=t+pow(n%10,2);
        n=n/10;
    }
    return t;
}
bool nt[10000000];
int main()
{
    for(int i=2;i<=10000000;i++)nt[i]=true;
    for(int i=2;i<=10000000;i++)
        if(nt[i])
        {
            int tam=10000000/i;
            for(int j=2;j<=tam;j++)nt[i*j]=false;
        }
    long long n,d=0;
    for(long long i=1;i<=10000000;i++)
    {
        if(nt[tcs(i)])
        {
            d++;
            kq[d]=i;
        }
        if(d==1000000)break;
    }
    while(cin>>n)
    {
        cout<<kq[n]<<'\n';
    }
    return 0;
}
