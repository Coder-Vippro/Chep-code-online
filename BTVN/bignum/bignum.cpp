#include <bits/stdc++.h>
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
string hieu(string x,string k)
{
    string kq="";
    while (k.length()<x.length()) k='0'+k;
    while (k.length()>x.length()) x='0'+x;
    int nho=0,cs1,cs2,cs;
    for(int i=k.length()-1;i>=0;i--)
    {
        cs1=x[i]-48;
        cs2=k[i]-48;
        cs=(cs1-cs2+nho);
        if(cs<0) {cs=cs+10;nho=-1;}else nho=0;
        cs=cs%10;
        kq=char(cs+48)+kq;
    }
    while(kq[0]=='0' && kq.length()>1) kq.erase(0,1);
    return kq;
}
string nhanNho(char a, string b)
{
    string s = "";
    int temp = 0;
    for (int i=b.length()-1; i>=0; i--)      
    {
        temp = (a-48)*(b[i]-48) + temp;
        s=char(temp%10+48)+s;
        temp = temp/10;
    }
    if (temp>0)s=char(temp%10+48)+s;
    return s;
}
string nhan(string a, string b){
    string s = "";
    int l=a.length();
    string s1;
    for (int i=l-1; i>=0; i--){
        s1 = s1 + nhanNho(a[i],b);
        s1.insert(s1.length(),l-i-1,'0');
        s =sum(s, s1);
    }
    return s;
}
int main()
{
    string a,b; 
    cin>>a>>b; 
    bool da,db; 
    if(a[0]=='-'){da=0;a.erase(0,1);} 
    else da=1; 
    if(b[0]=='-'){db=0;b.erase(0,1);} 
    else db=1; 
    if(da==1&&db==1)cout<<tong(a,b)<<'\n'<<hieu(a,b)<<'\n'; 
    if(da==0&&db==1)cout<<'-'<<hieu(a,b)<<'\n'<<'-'<<tong(a,b)<<'\n'; 
    if(da==1&&db==0)cout<<hieu(a,b)<<'\n'<<tong(a,b)<<'\n'; 
    if(da==0&&db==0)cout<<'-'<<tong(a,b)<<'\n'<<'-'<<hieu(a,b)<<'\n'; 
    return 0;
}