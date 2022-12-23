#include <bits/stdc++.h>

using namespace std;
int n,k;
int A[1000001];
int main()
{
   freopen("DIENKINH.INP","r",stdin);
   freopen("DIENKINH.OUT","w",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>A[i];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        if(A[i]-A[j]==k){
      cout<<A[j]<<" "<<A[i];
      return 0;
    }
}
