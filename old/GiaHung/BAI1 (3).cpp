#include <bits/stdc++.h>
using namespace std;
int maxcs(long long n){
    int t=0;
    while (n>0){
        int cs=n%10;
        t=max(t,cs);n=n/10;
    }
    return t;
}
bool ktnt(long long n){
    if(n<2) return false;
    for (int i=2;i*i<=n;i++)
        if(n%i==0) return false;
    return true;
}
int main()
{
    freopen("BAI1.inp","r",stdin);
    freopen("BAI1.out","w",stdout);
    long long n,m,nt=2;
    cin>>n;
    m=n;string s="";string cs="01";
    while (m>0){
        int du=m%2;
        s=cs[du]+s;
        m=m/2;
    }
     cout<<s<<'\n';
    m=n;s="";cs="0123456789ABCDEF";
    while (m>0)
    {
        int du=m%16;
        s=cs[du]+s;
        m=m/16;
    }
     cout<<s<<'\n';
     cout<<n<<"=";
     m=n;
    while (m>0){
        int f1=0,f2=1,f3=0;
        while (f2<=m){
          f3=f1+f2;f1=f2;f2=f3;
        }
        m=m-f1;
        if(m>0) cout<<f1<<"+";else cout<<f1;
    }
    cout<<'\n';
    cout<<n<<"=";
    m=n;nt=2;
    while(m>1){
        while (m%nt==0){
            m=m/nt;
            if (m>1)cout<<nt<<".";else cout<<nt;
        }
        nt++;
    }
    cout<<'\n';
    cout<<maxcs(n)<<'\n';
    m=n+2;
    while (__gcd(m,n)>1) m++;
    cout<<m<<'\n';

    return 0;
}
