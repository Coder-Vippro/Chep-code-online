#include <bits/stdc++.h>

using namespace std;
string dao(string x){
    string s="";int xl=x.size();
    for(int i=0;i<=xl-1;i++)s=x[i]+s;
    return s;
}
long long doi1 (string x){
    long long n;int xl=x.size();
    for(int i=0;i<=xl-1;i++)n=n*10+i-48;
    return n;
}
string doi2 (long long y){
    string k="";
    while (y>0){
        k=char(y%10+48)+k;
        y=y/10;
    }
    return k;
}
bool kt(long long n){
    string a=doi2(n);
    string b=dao(a);
    int ai=doi1(a);
    int bi=doi1(b);
    if(__gcd(ai,bi)==1)return 1;
    else return 0;
}
int main()
{
    freopen("sotl.inp","r",stdin);
    freopen("sotl.out","w",stdout);
    long long a,b,d=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++)if(kt(i)==1){d++;}
    cout<<d;
    return 0;
}



