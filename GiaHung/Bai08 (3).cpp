#include <bits/stdc++.h>
using namespace std;
long i,j,n,a[100000];
long d1,d2,k,c;
int main()
{
    freopen("Bai08.inp","r",stdin);
    freopen("Bai08.out","w",stdout);
    cin>>n;
    for(i=1;i<=n;i++) cin>>a[i];
    sort(a,a+n+1);
    for(i=1;i<=n;i++) cout<<a[i]<<" ";
   i=1;d1=1;d2=1;
   while(a[i]==a[i+1])
   {
       d1++;
       i++;
   }

   k=n;
   while(a[k]==a[k-1])
   {
       d2++;
       k--;
   }
   if((d1==n)||(d2==n)) cout<<n*(n-1)/2;
   else cout<<d1*d2;
}
