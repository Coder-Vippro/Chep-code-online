#include <bits/stdc++.h>
using namespace std;
bool ktnt(int n)
{
    int k=sqrt(n);
    if(k*k==n)
      return true;
      else return false;
}
int main()
{
    int n;
    cin>>n;
    if(ktnt(n)==true)cout<<n;
    else for(int i=n;i>0;i++)if(ktnt(i)==true){
            cout<<i;
            return 0;}
}
