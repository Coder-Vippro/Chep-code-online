////ON TAP 74

#include <bits/stdc++.h>

using namespace std;

int scs(long long n)
{
    int d=0;
    while(n>0)
    {
        d++;
        n=n/10;
    }
    return d;
}
long long tcs(long long n)
{
    long long d=0,a=scs(n);
    while(n>0)
    {
        d=d+pow(n%10,a);
        n=n/10;
    }
    return d;
}
int main()
{
    long long n;
    cin>>n;
    if(tcs(n)==n)
    {
        cout<<"YES";

    }
    else cout<<"NO";
    return 0;
}
