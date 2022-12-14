#include <bits/stdc++.h>
using namespace std;
int sdn(long long n)
{
    long long snd=0;
    long long k=n;
    while(n>0)
    {
        snd=n%10+snd*10;
        n=n/10;
    }
    return snd;
}
bool ktsdn(long long n)
{
    long long snd=0;
    long long k=n;
    while(n>0)
    {
        snd=n%10+snd*10;
        n=n/10;
    }
    if(k==snd)
    return true;
    else return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin>>n;
    if(n<0)
    {
        n=n*-1;
    }
    while(n>0)
    {
        if(ktsdn(n)==true)
        {
            cout<<n;
            return 0;
        }
        else n=n+sdn(n);
    }
}