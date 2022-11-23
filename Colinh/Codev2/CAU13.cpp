#include <bits/stdc++.h>
using namespace std;
long long n;
string s="";
int main()
{
    freopen("CAU13.INP","r",stdin);
    freopen("CAU13.OUT","w",stdout);
    cin>>n;
    while(n>0)
    {
        s=s+char(n%10+48);
        n=n/10;
    }
    reverse(s.begin(),s.end());
    cout<<s;

}