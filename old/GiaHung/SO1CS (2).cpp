#include <bits/stdc++.h>
using namespace std;
int main()
{
 freopen("SO1CS.INP","r" ,stdin);
 freopen("SO1CS.OUT","w",stdout);
 long long k;
  int N,c=0;
  cin>>N;
   for(int i=1;i<=9;i++) {
k=i;
while(k<=N){
c++;
 k=k*10+i;
 }
 }
cout<<c;
 return 0;
}
