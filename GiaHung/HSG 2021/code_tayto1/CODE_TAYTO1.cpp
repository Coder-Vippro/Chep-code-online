#include <bits/stdc++.h>
using namespace std;
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
string tich(string x,long long y)
{
    long long nho=0,tam,cs;
    string kq="";
    for(int i=x.length()-1;i>=0;i--)
    {
        cs=x[i]-48;
        tam=cs*y+nho;
        cs=tam%10;nho=tam/10;
        kq=char(cs+48)+kq;
    }
    while(nho>0)
    {
        kq=char(nho%10+48)+kq;
        nho=nho/10;
    }
    return kq;
}
string thuong(string x,long long y)
{
    long long nho=0,du=0,cs;
    string kq="";
    for(int i=0;i<x.length();i++)
    {
        cs=x[i]-48;du=du*10+cs;
        cs=du/y;du=du%y;
        kq=kq+char(cs+48);
    }
    while(kq[0]=='0' && kq.length()>1) kq.erase(0,1);
    return kq;
}
int main()
{
    string a;
    long long b;
    cin>>a>>b;
    cout<<hieu(a,b);
}
