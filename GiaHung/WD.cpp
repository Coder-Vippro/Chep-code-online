#include <bits/stdc++.h>

using namespace std;
int n;
int A[100001];
int main()
{
freopen("WD.INP","r",stdin);
freopen("WD.OUT","w",stdout);
cin>>n;
int dem=0;
for(int i=1;i<=n;i++)

{
    cin>>A[i];
}
sort(A,A+n+1);
for(int i=1;i<=n;i++)
{
    if(A[i]==A[i+1])       {
           dem=dem+2;
           i=i+2;
       }
}
cout<<n-dem;
    return 0;
}
