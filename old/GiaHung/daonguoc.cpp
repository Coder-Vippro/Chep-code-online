#include <bits/stdc++.h>
using namespace std;
int main()
{
 freopen("daonguoc.inp","r",stdin);
 freopen("daonguoc.out","w",stdout);
 int n ,sodao=0;
 cin >>n;
 while (n>0)
 {
 sodao=sodao*10+n%10;
 n=n/10;
 }
 cout<<sodao;
 return 0;
}
