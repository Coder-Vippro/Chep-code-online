#include <bits/stdc++.h>
using namespace std;
string nhan(string a, string b)
{
    string res="";
    int n=a.length();
    int m=b.length();
    int len=n+m-1;
    int carry=0;
    for(int i=len;i>=0;i--)
    {
        int tmp=0;
        for(int j=n-1;j>=0;j--)
            if(i-j<=m && i-j>=1)
            {
                int a1=a[j]-48;
                int b1=b[i-j-1]-48;
                tmp+=a1*b1;
            }
        tmp+=carry;
        carry=tmp/10;
        res=char(tmp%10 + 48)+res;
    }
    while(res.length()>1 && res[0]=='0') res.erase(0,1);
    return res;
}
bool kt(int n)
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
    else cout<<"NO"<<'\n';
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