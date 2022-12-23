#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("daycon.inp","r",stdin);
    freopen("daycon.out","w",stdout);
    long long n,h,d=0,a[2001];
    cin>>n>>h;
    for(int i=1;i<=n;i++)
        cin>>a[i];
     //C1;
     for(int i=1;i<=n;i++)
     {
         if(a[i]!=h)
         {
             long long t=a[i];
             for(int j=i+1;j<=n;j++)
             {
                 t=t+a[j];
                 if(t==h)
                 {
                     d++;
                     break;
                 }
                 else if(t>h)break;
            }
         }
         else d++;
     }
     cout<<d;
     //C2;

    return 0;
}
