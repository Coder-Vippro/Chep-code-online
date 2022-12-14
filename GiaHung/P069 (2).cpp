#include<bits/stdc++.h>
using namespace std;
 int main()
{
    int n,i,j;
    long s;
    int a[200];
    cin>>n;
    s=1;
    for(i=1;i<=n;i++)
    {
       cin>>a[i];
       s=s*a[i];
       s=s%10;
    }
    if(s>=0) cout<<s;
       else cout<<-s;
    return 0;
 }