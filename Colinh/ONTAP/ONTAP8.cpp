#include <bits/stdc++.h>
using namespace std;
int n;
string hoandoi(int n)
{
    string s="";
    while(n>0)
    {
        s=s+char(n%10+48);
        n=n/10;
    }
    reverse(s.begin(),s.end());
    return s;
}
int n;
int main()
{
    freopen("ONTAP8.INP","r",stdin);
    freopen("ONTAP8.OUT","w",stdout);
    cin>>n;
    cout<<hoandoi(n)<<'\n';
    if(n%2==0)
    {
        cout<<n/2<<' '<<n/2<<'\n';
    }
    else cout<<n%2<<' '<<n%2+1<<'\n';
    cout<<1<<' '<<n;
}