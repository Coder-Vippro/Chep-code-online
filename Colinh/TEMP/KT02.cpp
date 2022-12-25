#include <bits/stdc++.h>
#define N int (1e7)
using namespace std;
int p[N+2];
void sangngto (int n) 
{
    fill(p,p+n+1,1); 
    p[0]=p[1]=0;
    for(int i=2;i*i<=n;i++)
    {
        if(p[i]==1)
        for(int j=i*i;j<=n;j+=i) p[j]=0;
    }
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
bool ktcp(int n)
{
    int k=sqrt(n);
    if(k*k==n)return true;
    return false;
}
bool ktdx(int n)
{
    string s;
    stringstream ss;
    ss<<n;
    ss>>s;
    string k=s;
    reverse(s.begin(),s.end());
    if(k==s)return true;
    return false;
}
bool ktmm(string k, int n)
{
    if(n%k.size()==0)return true;
    return false;
}
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
int n;
string k;
int main()
{
    freopen("KT02.INP","r",stdin);
    freopen("KT02.OUT","w",stdout);
    cin>>n;
    sangngto(n);
    int demnt=0;
    int demfibo=0;
    int demcp=0;
    int demdx=0;
    int demmayman=0;
    stringstream ss;
    ss<<n;
    ss>>k;
    for(int i=1;i<=n;i++)
    {
        if(p[i]==1)demnt++;
        if(sosanh(Fibo(i),k)==0)demfibo++;
        if(ktcp(i)==true)demcp++;
        if(ktdx(i)==true)demdx++;
        if(ktmm(k,i)==true)demmayman++;
    }
    cout<<demnt<<'\n'<<demfibo-1<<'\n'<<demcp<<'\n'<<demdx<<'\n'<<demmayman;
    
}
