#include <bits/stdc++.h>
using namespace std;
bool ktnt(int x) 
{
    if(x<2)return false;
    if(x==2)return true;
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)
        return false;
    }
    return true;
}
bool kt(int n)
{
    int kq=1;
    int i=2;
    int dem=0;
    int dem2=0;
    while(i<=n)
    {
        if(n%i==0)dem2++;
        while(n%i==0)
        {n=n/i;dem++;}
        kq=kq*(dem+1);
        dem=0;
        i++;
    }
    if(kq>2 || dem2>2)return false;
    return true;
}
int n,x;
int main()
{
    freopen("kt08.INP","r",stdin);
    freopen("kt08.OUT","w",stdout);
    cin>>n;
    while(n--)
    {
        cin>>x;
        if(ktnt(x)==true)
        {
            cout<<"NO"<<'\n';
        }
        else if(kt(x)==true)
        {
            cout<<"YES"<<'\n';
        }
        else cout<<"NO"<<'\n';
    }
    return 0; 
} 
