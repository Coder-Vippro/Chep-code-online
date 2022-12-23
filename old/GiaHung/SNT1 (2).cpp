#include <iostream>

using namespace std;
     int f[10000001];
     int p[10000001];
     int snt[10000001];
     int t=0;
bool ktnt(long long n)
{
 if(n<2)
    return false;
 int dem=0;
 for(int i=1;i<=n;i++)
 {
     if(n%i==0)
       dem++;
 }
 if(dem==2)
    return true;
 else return false;
}


int main()
{

     long long n;
     cin>>n;
     int f[1]=0;
     for(int i=2;i<=10000000;i++)
       {
           f[i]=1;
           p[i]=1;
           snt[i]=1;
       }
    for(int i=2;i<=10000000;i++)
              {
                  if(f[i]==1)
                  {
                      for(int j=2;j*i<=1000000;j++)
                        f[i*j]=0;
                  }
              }
               int k=1;
               for(int i=2;i<=10000000;i++)
              {
               if(f[i]==1)
               {
                   p[k]=1;
                   k++;
               }
              }
              int sl=1;
              for(int i=1;i<=k;i++)
              {
                  if(f[i]==1)
                  {
                      snt[sl]==p[i];
                      sl++;
                  }
              }
cout<<snt[n];
    return 0;
}

