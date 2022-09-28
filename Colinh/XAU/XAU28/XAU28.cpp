#include <bits/stdc++.h>

using namespace std;
string tong(string x,string k)
{
    string kq="";
    while (k.length()<x.length()) k='0'+k;
    while (k.length()>x.length()) x='0'+x;
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
string k;
string n;
int main()
{
    freopen("XAU28.INP","r",stdin);
    freopen("XAU28.OUT","w",stdout);
    cin>>k>>n;
    cout<<tong(k,n);
    return 0;
}
