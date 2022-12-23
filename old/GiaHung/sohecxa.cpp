#include <bits/stdc++.h>

using namespace std;
string doi(int n)
{
    string s="";
    while(n!=0)
    {
        if(n%16<=9)s=char(n%16+48)+s;
        else s=char(n%16+55)+s;
        n=n/16;
    }
    return s;
}
int main()
{
    freopen("sohecxa.inp","r",stdin);
    freopen("sohecxa.out","w",stdout);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        cout<<doi(a)<<'\n';
    }
    return 0;
}
