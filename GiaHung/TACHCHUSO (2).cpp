#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("tachso.inp","r",stdin);
    freopen("tachso.out","w",stdout);
    long long n,a=10,i;
    cin>>n;
    while(a<n){
      i=n/a%10;
      a=a*a;
      cout<<endl<<i;
    }
    return 0;
}
