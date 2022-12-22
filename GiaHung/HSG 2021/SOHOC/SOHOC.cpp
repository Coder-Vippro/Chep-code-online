#include <bits/stdc++.h>

using namespace std;
int chusolonnhat(long long n)
{
    int Max=n%10;
    int k;
    while(n>0)
    {
        k=n%10;
        if(k>Max )
            Max=k;
        n=n/10;
    }
    return Max;
}
int scs(long long n)
    {
        int h;
        int dem=0;
        while(n>0)
        {
            h=n%10;
            n=n/10;
            dem++;
        }
        return dem;

    }
    int tcs(long long n)
    {
        long long tong=0;
        while(n>0)
        {
            tong=tong+n%10;
            n=n/10;
        }
        return tong;
    }
    bool ktnt(long long n)
    {
        int dem=0;
        if(n<2)
            return false;
        for(int i=1;i<=n;i++)
            if(n%i==0)
            dem++;
        if(dem==2)
            return true;
        else return false;
    }
    int ktcp(long long n)
    {
        int k=sqrt(n);
        if(n==k*k)
            return true;
        else return false;
    }


int main()
{
    //freopen("SOHOC.INP","r",stdin);
    //freopen("SOHOC.OUT","w",stdout);
    long long a;
    cin>>a;
    cout<<"Cau a: "<<chusolonnhat(a)<<'\n';
    cout<<"Cau b: "<<scs(a)<<'\n';
    cout<<"Cau c: "<<tcs(a)<<'\n';
    if(ktnt(a)==true)
    {
        cout<<"Cau d: "<<"YES"<<'\n';
    }
    else cout<<"Cau d: "<<"NO"<<'\n';
    if(ktcp(a)==true)
    {
        cout<<"Cau e: "<<"YES"<<'\n';
    }
    else cout<<"Cau e: "<<"NO"<<'\n';
    for(int i=1;i<a;i++)
        for(int j=1;j<a;j++)
        if(ktnt(i)==true && ktnt(j)==true && i*j==a)
        {
            cout<<"Cau f: "<<i<<"."<<j<<'\n';
            return a;
        }
     for(int h=a;h>0;h--)
         for(int k=1;k<=a;k++)
     if(h+k==a && ktnt(h)==true && ktnt(k)==true)
        {cout<<"Cau h: "<<h<<"+"<<k<<'\n'; return a;}






    return 0;
}
