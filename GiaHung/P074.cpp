#include<bits/stdc++.h>
using namespace std;
bool ktcp(int n)
{
    int k=sqrt(n);
    if(k*k==n)
      return true;
      else return false;
}
int main()
{
int n;
for(int i=n;i>0;i--)
{
    if(ktcp(i)==true)
    {
      cout<<sqrt(i);
      return 0;
    }
}
}