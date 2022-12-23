#include <bits/stdc++.h>

using namespace std;
string doi(long long n)
{
    string s="";
    while(n>0)
    {
        s=char(n%2+48)+s;
        n/=2;
    }
    return s;
}
bool com(string a,string b)
{
    int d=0;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0;i<max(a.size(),b.size());i++)
        if(a[i]!=b[i]) d++;
    if(d<=1) return true;
    else return false;
}
bool ss(long long a,long long b)
{
    if(com(doi(a),doi(b))) return true;
    else return false;
}
int main()
{
    freopen("bai_2.inp","r",stdin);
    freopen("bai_2.out","w",stdout);
    long long a,b;
    while(cin>>a>>b)
    {
        if(ss(a,b)) cout<<1;
        else cout<<0;
    }
    return 0;
}
