#include <bits/stdc++.h>
using namespace std;
bool Nto[987654322];
int scs(long long n){
    d=0;
while(n>0){
    d++;n/=10;
}
return 0;
}
bool n_prime(long long n){
  if(n<12)return 0;
if(Nto[n]==0)return 0;
   int m=scs(n);
   while(n
}
int main()
{
    //freopen("ONTINH06.inp","r",stdin);
    //freopen("ONTINH06.out","w",stdout);
    long long s=2,n;
    cin>>n;
    memset(Nto,1,987654322);
    for (int i=2;i<=987654322;i++)if(Nto[i]==1)for(int j=2*i;j<=987654322;j+=i)if(Nto[j]==1)Nto[j]=0;

    return 0;
}
