#include<bits/stdc++.h>
using namespace std;
bool sdn(long long n)
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
        n=n*(-1);
    }
    if(sdn(n)==true)
    {
        cout<<"YES";
    }
    else cout<<"NO";
}