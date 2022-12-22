#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("PHANSO.inp","r",stdin);
    freopen("PHANSO.out","w",stdout);
    long long a,b,ucln;
    cin>>a>>b;
    int t=a%b;
    if(t==0)cout<<a/b;
    else{
   ucln=1;
   for(int i=1;i<=a;i++)
     if(a%i==0 && b%i==0) ucln=i;
   cout<<a/ucln<<"/"<<b/ucln;}
   return 0;
}
