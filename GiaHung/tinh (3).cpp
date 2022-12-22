#include <bits/stdc++.h>
using namespace std;
int main()
{
 freopen("tinh.inp","r",stdin);
 freopen("tinh.out","w",stdout);
 long long n,t=0,a;
 cin>>n;
 for(int i=1;i<=n;i++)
 {
     a=i*i*2;
     if(i%2==0) t=t-a;
     else t=t+a;
 }
 cout<<t;
 return 0;
}
