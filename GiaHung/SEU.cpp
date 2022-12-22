#include <bits/stdc++.h>
using namespace std;
int main()
{
 freopen("SEU.inp","r",stdin);
 freopen("SEU.out","w",stdout);
 int a,b;cin>>a>>b;
 int c=(a+1)%2,d=(b+1)%2;
 cout<<min(c,d)<<' '<<min(a,b);
 return 0;
}
