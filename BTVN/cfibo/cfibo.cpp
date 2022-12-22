#include <bits/stdc++.h>
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
int main()
{

}