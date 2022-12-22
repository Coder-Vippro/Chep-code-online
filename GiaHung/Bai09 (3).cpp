#include <bits/stdc++.h>
using namespace std;

float n,x;
unsigned long long t,i;
int main()
{

    freopen("Bai09.inp","r",stdin);
    freopen("Bai09.out","w",stdout);
    cin>>t;
    while (t!=0)
  {   i=2;
      cin>>n;
      while(n*i!=int(n*i))
      {
          i++;
      }
      cout<<i<<endl;
      t--;
  }
}
