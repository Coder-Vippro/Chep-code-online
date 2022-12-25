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
string nhan(string a, string b)
{
    string s = "";
    int l=a.length();
    string s1;
    for(int i=l-1; i>=0; i--){
        s1 = nhanNho(a[i],b);
        s1.insert(s1.length(),l-i-1,'0');
        s =sum(s, s1);
    }
    return s;
}
bool kt (int n)
{
    int m=2*n;
    int x=sqrt(m);
    if(x*(x+1)==m)
    return true;
    return false;
}
int kq(int n)
{
    int maxx=-1e9;
    while(n>0)
    {
        if(maxx<n%10)
        {
            maxx=n%10;
        }
        n=n/10;
    }
    return maxx;
}
string kq1(int n)
{
    string kq="1";
    string k="";
    for(int i=1;i<=n;i++)
    {
        k=k+char(i+48);
        kq=nhan(kq,k);
        k="";
    }
    return kq;
}

int main()
{
    freopen("KT01.INP","r",stdin);
    freopen("KT01.OUT","w",stdout);
    int n;
    string k;
    cin>>n;
    stringstream ss;
    ss<<k;
    ss>>k;
    if(kt(n)==true)
    {
        cout<<"YES"<<'\n';
    }
    cout<<kq(n)<<'\n';
    string s=kq1(n);
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]!='0')
        {
            cout<<s[i];
            return 0;
        }
    }
}