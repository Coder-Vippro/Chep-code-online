#include <bits/stdc++.h>
using namespace std;
bool ktnt(int n)
{
  if(n==2)
  return true;
  if(n<2)
  return false;
  if((n%2==0 && n>2)||(n%3==0 && n>3)||(n%5==0 && n>5)||(n%7==0 && n>7))
  return false;
  else return true;
}
int main()
{
  int n;
  cin>>n;
  int dem=0;
  for(int i=1;i<=n;i++)
  {
    if(ktnt(i)==true)
    {
      dem++;
    }
  }
  cout<<dem;
}