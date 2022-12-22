#include <bits/stdc++.h>
using namespace std;
bool hopso(int n)
{
    if(n%2==0)return true;
    for(int i=2;i<=n;i++)
    {
        int k=n/i;
        if(k<n && i<n && k*i==n)
        return true;
    }
    return false;
}
bool chinhphuong(int n)
{
    int k=sqrt(n);
    if(k*k==n)
    {
        return true;
    }
    return false;
}
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
int n;
int main()
{
    freopen("ONTAP16.INP","r",stdin);
    freopen("ONTAP16.OUT","w",stdout);
    cin>>n;
    int dem1=0,dem2=0,dem3=0;
    for(int i=1;i<=n;i++)
    {
        if(hopso(i)==true)
        {
            dem1++;
        }
        if(Fibo(i)<=n)dem2++;
        if(chinhphuong(i)==true)dem3++;
    }
    cout<<dem1<<'\n'<<dem3<<'\n'<<dem2;
}