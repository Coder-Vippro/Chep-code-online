#include <bits/stdc++.h>

using namespace std;
string tong(string a,string b)
{
    while(a.size()<b.size()) a='0'+a;
    while(a.size()>b.size()) b='0'+b;
    string kq="";
    long long m=a.size()-1,so,so1,so2,nho=0;
    while(m>=0)
    {
        so=a[m]-48;
        so1=b[m]-48;
        so2=so1+so+nho;
        if(so2>=10) {so2-=10; nho=1;}
        else nho=0;
        m--;
        kq=char(so2+48)+kq;
    }
    if(nho==1) kq='1'+kq;
    return kq;
}
long long a[21];
int main()
{
    freopen("DIGITSUM.inp","r",stdin);
    freopen("DIGITSUM.out","w",stdout);
    long long t,n,sl=0,j=0,sl1;
    cin>>t;
    string c="",b="";
    while(t--)
    {
        sl=0;
        b="",c="";
        cin>>n;
        for(long long i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]==0) sl++;
        }
        sort(a+1,a+1+n,greater<int>());
        for(long long i=1;i<=n-sl-2;i++)
        {
            while(a[i]==0) i++;
            b=char(a[i]+48)+b;
            if(i<n-sl-2 && a[i+1]!=0)
            {
                i++;
                c=char(a[i]+48)+c;
            }
        }
        //cout<<b<<" "<<c<<"         ";
        sl1=sl;
        while(sl1>0)
        {
            if(b.size()<c.size()) b='0'+b;
            else if(b.size()>c.size()) c='0'+c;
            else
            {
                if(a[n-sl]>a[n-sl-1]) c='0'+c;
                else b='0'+b;
            }
            sl1--;
        }
        cout<<b<<" "<<c;
        b=char(a[n-sl]+48)+b;
        c=char(a[n-sl-1]+48)+c;
        for(long long i=1;i<=n;i++) cout<<a[i]<<" ";
        cout<<endl;
        cout<<tong(b,c)<<endl;
        cout<<endl;
    }
    return 0;
}