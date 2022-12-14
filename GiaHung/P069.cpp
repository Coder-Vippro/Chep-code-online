#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,n,s=1;
    cin>>a;
    for(long long i=1;i<=a;i++){
    cin>>n;
    if(n==0){cout<<0;return 0;}
    s=s*n;
    s=s%10;
    }
    cout<<s%10;
  return 0;
}
