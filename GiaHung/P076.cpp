#include<bits/stdc++.h>
using namespace std;
bool ktcp(int n)
{
    int k=sqrt(n);
    if(k*k==n)
      return true;
      else return false;
}
int A[100001];
int main()
{
int n;
cin>>n;
int dem=0;
for(int i=1;i<=n;i++)
{
    cin>>A[i];
    if(ktcp(A[i])==true)
       dem++;
}
cout<<dem;
}