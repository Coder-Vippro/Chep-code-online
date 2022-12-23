#include <bits/stdc++.h>
using namespace std;
int scs(int n){
   int d=0,m=n;
   while(m>0){
    d=d+m%10;
    m=m/10;
   }
   return d;
}
int main()
{
    //freopen("Bai07.inp","r",stdin);
    //freopen("Bai07.out","w",stdout);
    int n,k;
    cin>>n>>k;
    long long m=pow(10,n),q=pow(10,n-1);
    bool Nto[m+1],yn=0;
    for(int i=2;i<=m;i++)Nto[i]=1;
    for (int i=2;i<=m;i++)if(Nto[i]==1)for(int j = 2 * i; j <= n; j += i)Nto[j]=0;
    for(int j=m;j>=q;j--)if(Nto[j==1])if(scs(j)==k){
                cout<<j;
                yn=1;
                break;
            }
if(yn==0)cout<<-1;
    return 0;
}
