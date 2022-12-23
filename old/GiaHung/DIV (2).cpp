#include <bits/stdc++.h>

using namespace std;
long long tcs(long long n)
{
    long long tong=0;
    while(n>0)
    {
      tong=tong+n%10;
      n=n/10;
    }
    return tong;
}
int main()
{
   freopen("DIV.INP","r",stdin);
   freopen("DIV.OUT","w",stdout);
    long long n;
    cin>>n;
    if(n%tcs(n)==0)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}
