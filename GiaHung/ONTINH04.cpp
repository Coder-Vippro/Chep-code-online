#include <iostream>

using namespace std;
bool f[100000001];
int main()
{
  freopen("ONTINH04.INP","r",stdin);

  freopen("ONTINH04.OUT","w",stdout);
  for(int i=2;i<=10001;i++) f[i]=1;
  f[0]=0;
  f[1]=f[0];
  for(int i=2;i*i<=100001;i++)
  {
      if(f[i]==1)
      {
          for(int j=2;i*j<=1000001;j++) f[i*j]=0;
      }
  }
  int m,vt=0,d=0;
  cin>>m;
  for(int i=1;;i++)
  {
      if(f[i]==1) vt++;
      if(f[vt]==1)d++;
      if(d==m)
      {
          cout<<i;
          return 0;
      }
  }
    return 0;
}
