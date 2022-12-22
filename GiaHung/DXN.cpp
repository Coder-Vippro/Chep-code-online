#include <bits/stdc++.h>

using namespace std;

int main()
{
  freopen("dxn.inp","r",stdin);
  freopen("dxn.out","w",stdout);
  cin>>n;
  int luu=n;
  while(n>0)
  {
      sodao=sodao*10+n%10;
      n=n/10;
  }
  if(sodao==luu) cout<<"YES";else cout<<"NO";
    return 0;
}
