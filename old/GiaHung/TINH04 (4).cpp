#include <bits/stdc++.h>

using namespace std;
int tonguoc(int n){
    int i=2,s=0;
   while(n>1){
        int k=0;
    while(n%i==0){k++;n=n/i;}
   if(k>0)s=s+i;
   i++;
   }
   return s;
}
int main()
{
    freopen("TINH04.inp","r",stdin);
    freopen("TINH04.out","w",stdout);
    int a,b;
    cin>>a>>b;
    if(tonguoc(a)==tonguoc(b))cout<<"YES";
    else cout<<"NO";
    return 0;

}
