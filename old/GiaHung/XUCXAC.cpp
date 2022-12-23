#include <bits/stdc++.h>
using namespace std;
int main()
{
 freopen("XUCXAC.inp","r",stdin);
 freopen("XUCXAC.out","w",stdout);
 int a;cin>>a;
 int b=a%4,c=a/4;
  if(b==1)cout<<c*14+1;
  else if(b==2)cout<<c*14+4;
  else if(b==3)cout<<c*14+10;
 return 0;
}
