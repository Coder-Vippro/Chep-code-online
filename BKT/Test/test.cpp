#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long k=n;
    long long dn=0;
    while(k>0)
    {
        dn=dn*10+k%10;
        k=k/10;
    }
    if(dn==n)cout<<n;
    cout<<dn;
}