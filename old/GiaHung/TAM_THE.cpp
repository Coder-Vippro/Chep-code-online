#include <bits/stdc++.h>

using namespace std;
int main()
{
    freopen("TAM_THE.inp","r",stdin);
    freopen("TAM_THE.out","w",stdout);
    long long a=1,b=1,n,s,ucln=1;
    cin>>n;
    for(int i=1;i<=n-1;i++){cin>>s;a=a+s;}
    for(int i=1;i<=n;i++){b=b+i;}
   cout<<b-a;
   return 0;
}
