//LÊ GIA HƯNG -PCK
#include <bits/stdc++.h>

using namespace std;
bool NT (long long n){
    if(n<2)return 0;
for(int i=2;i<=n;i++)
    if(n%i==0)return 0;
   return 1;
}
int K(long long n){
 int d=0;
 while(n>0){
    n=n/10;
    d++;
 }
 return d;
}
int main()
{    //freopen("Bai07.inp","r",stdin);
     //freopen("Bai07.out","w",stdout);
     long long mi,ma,n,k;
     cin>>n>>k;
     ma=pow(10,n+1)-1;mi=ma/10;
     for(int i=ma;i<=mi;i--)
     if(K(i)==k)if(NT(i)==1){
        cout<<i;break;
     }
  return 0;
}
