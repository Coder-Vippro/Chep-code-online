#include <bits/stdc++.h>

using namespace std;
int A[1000001];
int B[1000001];
int l[100001];
int tr[100001];
int maxx;
int main()
{
    freopen("TANGDAN.INP","r",stdin);
    freopen("TANGDAN.OUT","w",stdout);
   int n;
   cin>>n;
   int dem=0;
   for(int i=1;i<=n;i++)
   {
       cin>>A[i];
   }
   for(int i=1;i<=n;i++)
   {
       l[i]=1;
   }
   maxx=0;
   for(int i=1;i<=n;i++)
       for(int j=i+1;j<=n;j++)
   {
       if(A[j]>A[i]&&(l[j]<l[i]+1))
        l[j]=l[i]+1;
       if(maxx<l[j]) maxx=l[j];
   }
   cout<<maxx;
       return 0;
}
