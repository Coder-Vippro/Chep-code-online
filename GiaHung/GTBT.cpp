#include <bits/stdc++.h>

using namespace std;
string s;
string tong(string x,long long y)
{
    string k="",kq="";
    while (y>0)
    {
        k=char(y%10+48)+k;
        y=y/10;
    }
    while (k.length()<x.length()) k='0'+k;
    int nho=0,cs1,cs2,cs;
    for(int i=k.length()-1;i>=0;i--)
    {
        cs1=x[i]-48;
        cs2=k[i]-48;
        cs=(cs1+cs2+nho);
        nho=cs/10;cs=cs%10;
        kq=char(cs+48)+kq;
    }
    if(nho>0) kq='1'+kq;
    return kq;
}
string hieu(string x,long long y)
{
    string k="",kq="";
    while (y>0)
    {
        k=char(y%10+48)+k;
        y=y/10;
    }
    while (k.length()<x.length()) k='0'+k;
    int nho=0,cs1,cs2,cs;
    for(int i=k.length()-1;i>=0;i--)
    {
        cs1=x[i]-48;
        cs2=k[i]-48;
        cs=(cs1-cs2+nho);
        if(cs<0) {cs=cs+10;nho=-1;}else nho=0;
        cs=cs%10;
        kq=char(cs+48)+kq;
    }
    while(kq[0]=='0' && kq.length()>1) kq.erase(0,1);
    return kq;
}
int main()
{
    cin>>s;
    for(int i=0;i<=s.size();i++)
    {
        if(s[i]=)
    }
    return 0;
}
