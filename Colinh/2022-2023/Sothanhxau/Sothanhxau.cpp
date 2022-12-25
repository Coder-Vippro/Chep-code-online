#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;
string sum(string x,string k)
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
int n;
string a,b;
int main()
{
    freopen("Sothanhxau.INP","r",stdin);
    freopen("Sothanhxau.OUT","w",stdout);
    cin>>n;
    string kq="";
    string tong="";
    while (n--)
    {
        cin>>a>>b;
        tong=sum(a,b);
        kq=kq+tong;
        tong="";
    }
    string tp=kq;
    reverse(kq.begin(),kq.end());
    if(kq==tp)
    {
        cout<<"YES";
        cout<<kq<<' '<<tp;
    }
    else cout<<"NO";
}