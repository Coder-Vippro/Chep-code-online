#include <bits/stdc++.h>
#define bignum string
using namespace std;
int sosanh(string a, string b)
{
    while(a.size()<b.size())a='0'+a;
    while(b.size()<a.size())b='0'+b;
    for(int i=a.length()-1;i>=0;i--)
    {
        if(a[i]>b[i])
        return 1;
        else return 0;
    }
    return -1;
}
bignum hieu (bignum a, bignum b)
{
    while(a.size()<b.size())a='0'+a;
    while(a.size()>b.size())b='0'+b;
    bignum c = "";
    int carry = 0;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        int t = (a[i] - 48) - (b[i] - 48) - carry;
        if (t < 0)
        {
            t += 10;
            carry = 1;
        }
        else carry = 0;
        c = char(t + 48) + c;
    }
    while (c[0] == '0') c.erase(0,1);
    if (c == "") c = "0";
    return c;
}
bignum tong(string x,string k)
{
    while(x.size()<k.size())x='0'+x;
    while(x.size()>k.size())k='0'+k;
    string kq="";
    int nho=0,cs1,cs2,cs;
    for(int i=k.length()-1;i>=0;i--){
        cs1=x[i]-48;cs2=k[i]-48;
        cs=(cs1+cs2+nho);
        nho=cs/10;cs=cs%10;
        kq=char(cs+48)+kq;
    }
    if(nho>0)kq='1'+kq;
    return kq;
}
bignum a,b;
int main()
{
    cin>>a>>b;
    if(a[0]!='-' && b[0]=='-')
    {
        b.erase(0,1);
        if(a>b)
        {
            cout<<hieu(a,b);
        }
        else if(a<b)
        {
            cout<<'-'<<hieu(b,a);
        }
        else cout<<hieu(a,b);
    }
    else if(a[0]=='-' && b[0]!='-')
    {
        a.erase(0,1);
        if(b>a)
        {
            cout<<hieu(b,a);
        }
        else if(a>b)
        {
            cout<<'-'<<hieu(a,b);
        }
        else cout<<hieu(b,a);
    }
    else if(a[0]=='-' && b[0]=='-')
    {
        a.erase(0,1);
        b.erase(0,1);
        cout<<'-'<<tong(a,b);
    }
    else cout<<tong(a,b);
}