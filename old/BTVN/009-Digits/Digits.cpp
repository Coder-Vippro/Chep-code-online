#include <bits/stdc++.h>
using namespace std;
long long pt(long long n)
{
    long long tong=0;
    while(n>10)
    {
        while(n>0)
        {
            tong=tong+n%10;
            n=n/10;
        }
        n=tong;
        tong=0;
    }
    return n;
}
int main()
{
    freopen("Digits.INP","r",stdin);
    freopen("Digits.OUT","w",stdout);
    int n;
    cin>>n;
    long long k;
    while(n--)
    {
        cin>>k;
        cout<<pt(k);  
    }
}