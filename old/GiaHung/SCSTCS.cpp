#include <bits/stdc++.h>
using namespace std;
int main()
{
 freopen("scstcs.inp","r",stdin);
 freopen("scstcs.out","w",stdout);
 int scs=0,tcs=0;
 char kt;
 while(cin>>kt)
 {
 scs++;
 tcs=tcs+int(kt)-48;
 }
 cout<<scs<<" "<<tcs;
 return 0;
}
