#include <bits/stdc++.h>

using namespace std;
int TCS(int n){
  int s=0;
  while(n>0){
    s=s+n%10;
    n=n/10;
  }
  return s;
}
bool KT(int n){
   int s=0,m=TCS(n);
   for(int i=1;i<=m;i++)if(n%i==0)s=s+i;
   if(s==m)return 1;
   else return 0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("shh.inp","r",stdin);
    freopen("shh.out","w",stdout);
    int a,n,d=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;if(KT(a))d++;
    }
    cout<<d;
    return 0;
}
