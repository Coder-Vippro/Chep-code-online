#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int n;
string tong(string x,string k)
{
    while(x.size()<k.size())x='0'+x;
    while(k.size()<x.size())k='0'+k;
    string kq="";
    while (k.length()<x.length()) k='0'+k;
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
string Fibo(int n)
{
   
    string f1="1",f2="1",f3;
    for(int i=3;i<=n;i++)
    {
        f3=tong(f1,f2);
        f1=f2;f2=f3;
    }
    return f1;
}
int main()
{
    freopen("N0316C.INP","r",stdin);
    freopen("N0316C.OUT","w",stdout);
    cin>>n;
    cout<<Fibo(n);
}