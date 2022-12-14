#include <bits/stdc++.h>

using namespace std;
int sum(int n)
{
    int s=0;
    while(n>0)
    {
        int r=n%10;
        s=s+r;
        n/=10;
    }
    return s ;
}
bool ktnt(int k)
{
  if(k<2)
    return false;
  for(int i=2;i*i<=k;i++)
    if(k%2==0)
    return false;
  return true;
}
int main()
{
    int n;
    cin>>n;
    if(ktnt(sum(n)))
        cout<<"YES";
    else cout<<"NO";
    return 0;
}
