#include <bits/stdc++.h>
using namespace std;
int soNT(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i <= sqrt(x); i++)
        if (x%i == 0)
            return 0;
    return 1;
}
int F(int n)
{   if(n==0 || n==1) return 1;
    else return F(n-2) +F(n-1);
}
int soFIBO(int m)
{
     for(int i=0;i<=m;i++)
       if(F(i)==m)return 1;
       return 0;
}
bool soCP(int n){
  int i = 0;
  while(i*i <= n){
        if(i*i == n){
            return true;
        }
        ++i;
    }
    return false;
}
bool soDX(int n){
int r,s=0,t;
    for(t=n;n!=0;n=n/10){
         r=n%10;
         s=s*10+r;
    }
    if(t==s)return 1;
    else return 0;
}
bool soMN(int n){
int dem=0,m=n;
    while(n>=10){
        n/=10;
        dem++;}
        if(m%dem==0)return 1;
    else return 0;
}
int main()
{
    //freopen("KT02.inp","r",stdin);
    //freopen("KT02.out","w",stdout);
    int n,a=0,b=0,c=0,d=0,e=0;
    cin>>n;
    for(int i=1;i<n;i++){
        if(soNT(i))a++;
         if(soFIBO(i))b++;
          if(soCP(i))c++;
           if(soDX(i))d++;
    }
    cout<<a<<'\n'<<b<<'\n'<<c<<'\n'<<d<<'\n'<<e;
    return 0;
}
