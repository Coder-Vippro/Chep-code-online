#include <bits/stdc++.h>

using namespace std;
bool f[1000001];
int main()
{
    freopen("ONTINH03.INP","r",stdin);
    freopen("ONTINH03.OUT","w",stdout);
   long long n;
   cin>>n;
   for(int i=2;i<=10001;i++)
    f[i]=true;
   f[0]=false;
   f[1]=f[0];
   for(int i=2;i*i<=10001;i++)
   {
       if(f[i]==true)
       {
           for(int j=2;j*i<=1001;j++) f[i*j]=false;
       }
   }
   long long S=2;
   for(int i=3;i<=n;i=i+2)
   {
       if(f[i]==true) S=S+i;
   }
   cout<<S<<endl;
   if(f[S]==true) cout<<"YES"; else cout<<"NO";

    return 0;
}
