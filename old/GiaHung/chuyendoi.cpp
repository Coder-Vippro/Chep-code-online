#include <bits/stdc++.h>

using namespace std;
string doi (int n)
{
    string s="";
    while(n!=0)
    {
        s=char(n%2+48)+s;
        n=n/2;
    }
    return s;
}
int main()
{
    freopen("chuyendoi.inp","r",stdin);
    freopen("chuyendoi.out","w",stdout);
    int n;
    cin>>n;
    cout<<doi(n);
    return 0;
}
