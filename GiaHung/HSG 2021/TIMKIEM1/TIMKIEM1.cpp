#include <bits/stdc++.h>

using namespace std;
int A[1000001];
int main()
{
    freopen("TIMKIEM1.INP","r",stdin);
    freopen("TIMKIEM1.OUT","w",stdout);
    int B[100001];
    int dem=0;
     long long n,x;
     cin>>n>>x;
     for(int i=1;i<=n;i++)
     {
         cin>>A[i];
     }
    for(int i=1;i<=n;i++)
    {
        if(A[i]==x)
        {
            B[i]=i;
        }
        else
        dem++;
    }
    if(dem==n)
    {
        cout<<-1;
    }
    else
   {
    sort(B+1,B+n+1);
       if(B[2]!= 0&& B[n]!=0)
    cout<<B[2]<<" "<<B[n];
    else if(B[n]==0)
        cout<<B[2];
    else if(B[2]==0)
        cout<<B[n];
   }

}
