#include <bits/stdc++.h>
#define N int (1e7)
using namespace std;
int p[N+2];
int n;
void sangngto (int n) //sang nguyen to
{
    fill(p,p+n+1,1); //phu toan bo mang p voi gia tri 1
    p[0]=p[1]=0;
    for(int i=2;i*i<=n;i++)
    {
        if(p[i]==1)
        for(int j=i*i;j<=n;j+=i) p[j]=0;
    }
}
bool kt(int n)
{
    int k=sqrt(n);
    if(k*k==n)return true;
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
bool dx(int n)
{
    string s="";
    while(n>0)
    {
        s=s+char(n%10+48);
        n=n/10;
    }
    string k=s;
    reverse(s.begin(),s.end());
    if(s==k)return true;
    else return false;
    return false;
}
bool mayman(int n)
{
    int dem=0;
    int k=n;
    while(n>0)
    {
        dem++;
        n=n/10;
    }
    if(k%dem==0)
    return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    sangngto(n);
    int dem1=0,dem2=0,dem3=0,dem4=0,dem5=0;
    for(int i=1;i<=n;i++)
    {
        if(p[i]==1)dem1++;
        if(kt(i)==true)dem2++;
        if(Fibo(i)<=n)dem3++;
        if(dx(i)==true)dem4++;
        if(mayman(i)==true)dem5++;
    }
    cout<<dem1<<'\n'<<dem3<<'\n'<<dem2<<'\n'<<dem4<<'\n'<<dem5;
}