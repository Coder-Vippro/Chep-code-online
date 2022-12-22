#include <bits/stdc++.h>
using namespace std;
int n;
bool ktnt(int x) //kiem tra nt kieu cu
{
    if(x<2)return false;
    if(x==2)return true;
    for(int i=2;i*i<=n;i++)
    {
        if(x%i==0)
        return false;
    }
    return true;
}
bool dx(int n)
{
    string s="";
    while(n>0)
    {
        s=s+char(n%10+48);
        n=n/10;
    }
    string k=s;
    reverse(s.begin(),s.end());
    if(s==k)return true;
    else return false;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    if(ktnt(n)==true)
    {
        cout<<"YES"<<'\n';
    }
    else cout<<"NO"<<'\n';
    int k=sqrt(n);
    if(k*k==n)
    {
        cout<<"YES"<<'\n';
    }
    else cout<<"NO"<<'\n';
    if(dx(n)==true)
    {
        cout<<"YES"<<'\n';
    }
    else cout<<"NO"<<'\n';
    float dem=0;
    float tong=0;
    while(n>0)
    {
        tong=tong+n%10;
        dem++;
    }
    cout<<fixed<<setprecision(2)<<tong/dem;
    return 0;
}