#include <bits/stdc++.h>

using namespace std;
int n;
int dem=0;
int main()
{
   freopen("ONTINH02","r",stdin);
   freopen("ONTINH02","w",stdout);
   cin >> n;
   for(int i=1;i<=n/2;i++)
   {
       if(i<(n-1*2)/2)
       {
           dem++;
       }

   }
   cout << dem;
   return 0;
}
