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
string nhanNho(char a, string b)
{
    string s = "";
    int temp = 0;
    for (int i=b.length()-1; i>=0; i--)      {
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
        s1[i] = nhanNho(a[i],b);
        s1[i].insert(s1.length(),l-i-1,'0');
        s=tong(s, s1);
    }
    return s;
}
string s;
string m;
int main()
{
    freopen("XAU30.INP","r",stdin);
    freopen("XAU30.OUT","w",stdout);
    cin>>m>>s;
    cout<<nhan(s,m);
    return 0;
}
