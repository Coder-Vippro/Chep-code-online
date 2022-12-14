#include <bits/stdc++.h>
using namespace std;
string tong(string x,string y)
{
    string kq="";
    while (y.length()<x.length()) y='0'+y;
    int nho=0,cs1,cs2,cs;
    for(int i=y.length()-1;i>=0;i--)
    {
        cs1=x[i]-48;
        cs2=y[i]-48;
        cs=(cs1+cs2+nho);
        nho=cs/10;cs=cs%10;
        kq=char(cs+48)+kq;
    }
    if(nho>0) kq='1'+kq;
    return kq;
}
int main()
{
    freopen("tongAAA.inp","r",stdin);
    freopen("tongAAA.out","w",stdout);
    string a;
    cin>>a;
    string aa=a+a,aaa=aa+a;
    cout<<tong(aaa,tong(aa,a));
    return 0;
}
