#include <bits/stdc++.h>

using namespace std;
bool ktchs(int n)
{
    int dem=0;
    while(n>0)
    {
        n=n/10;
        dem++;
    }
    int A[dem];
    int dem2=0;
    for(int i=1;i<=dem;i++)
    while(n>0)
    {
        A[i]=n%10;
        n=n/10;
    }
    for(int i=1;i<=dem;i++)
        for(int j=2;j<=dem;j++)
        if(A[i]==A[j])
            dem2++;

}
bool ktnt(int n)
{
 if(n<2)return false;
 if(n==2)return true;
    int dem=0;
    for(int i=1;i<=n;i++)
        if(n%i==0)
        dem++;
    if(dem==2) return true;
    else return false;
}
int main()
{
freopen("ONTINH06.INP","r",stdin);
    freopen("ONTINH06.OUT","w",stdout);
   int n;
   cin>>n;
   int dem=0;
   for(int i=1;i<=n;i++)
   {
       if(ktnt(i)==true && ktchs(i)!=false)
        cout<<i;

   }

    return 0;
}
