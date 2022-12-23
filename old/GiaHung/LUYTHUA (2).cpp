#include <bits/stdc++.h>
using namespace std;

string tich(string x,string n)
{
   long long y;int xl=n.size();
    for(int i=0;i<=xl-1;i++)y=y*10+i-48;
    long long nho=0,tam,cs;
    string kq="";
    for(int i=x.length()-1;i>=0;i--)
    {
        cs=x[i]-48;
        tam=cs*y+nho;
        cs=tam%10;nho=tam/10;
        kq=char(cs+48)+kq;
    }
    while(nho>0)
    {
        kq=char(nho%10+48)+kq;
        nho=nho/10;
    }
    return kq;
}
int main()
{    freopen("LUYTHUA.inp","r",stdin);
     freopen("LUYTHUA.out","w",stdout);
     string a;long long b;
     cin>>a>>b;
     bool da,db;
     if(a[0]=='-'){da=0;a.erase(0,1);}
     else da=1;
    string s=a;
    for(int i=1;i<b;i++)s=tich(s,a);
     if(da==1)cout<<s;
     else cout<<'-'<<s;

  return 0;
}
