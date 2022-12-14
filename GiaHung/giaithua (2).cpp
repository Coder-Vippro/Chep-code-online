#include <bits/stdc++.h>

using namespace std;

string nhan(string s,int n)
{
    long long cs=0,du=0;
    string kq;
    for(int i=s.length()-1;i>=0;i--)
    {
        cs=n*int(s[i]-48)+du;
        du=cs/10;
        cs=cs%10;
        kq=char(cs+48)+kq;
    }
    while(du>0)
    {
        kq=char(du%10+48)+kq;
        du=du/10;
    }
    while(kq[0]=='0')kq.erase(0,1);
    return kq;
}
long long tcs(string s)
{
    long long t=0;
    for(int i=0;i<s.length();i++)
        t=t+int(s[i]-48);
    return t;
}
int main()
{
    freopen("giaithua.inp","r",stdin);
    freopen("giaithua.out","w",stdout);
    int n;
    while(cin>>n)
    {
        string kq="2";
        for(int i=3;i<=n;i++)
            kq=nhan(kq,i);
        cout<<tcs(kq)<<endl;
    }
    return 0;
}
