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
string s;
int main()
{
    freopen("XAU06.INP","r",stdin);
    freopen("XAU06.OUT","w",stdout);
    string kq="";
    cin>>s;
    string temp;
    unsigned long long i = s.size();
    while(i--)
    {
        temp=s[i];
        kq=tong(kq,temp);
    }
    cout<<kq;
    return 0;
}
