#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("hohang.inp","r",stdin);
    freopen("hohang.out","w",stdout);
    long long n,a,b,ucln;
    cin>>n;
    for (long long i=1;i<=n;i++)
        {
              cin>>a>>b;
	      ucln=1;
              for (long long i=1;i<=a;i++)
                 if (a%i==0 & b%i==0) ucln=i;
              if (a-b==ucln || b-a==ucln) cout<<1<<endl;else cout<<0<<endl;
        }
   return 0;
}

