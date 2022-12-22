#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long n,k;
   cin>>n;
   k=0;
   for(long long i=1; i*i<=n;i++)
       if(n%i==0) k=k+2;
       if(int(sqrt(n))==sqrt(n)) k--;
       cout<<k;

    return 0;
}
