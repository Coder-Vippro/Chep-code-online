#include<bits/stdc++.h>
using namespace std;
int main()
{
freopen("Parity.INP","r",stdin);
freopen("Parity.OUT","w",stdout);
long long n;
int k;
cin>>k;
int tong=0;
while(k--)
{
    cin>>n;
while(n)
{
    if(n%2==1)
    tong=tong+1;
    n=n/2;     
}
   if(tong%2==0)
   {
        cout<<"even"<<endl;
   }
   else cout<<"odd"<<endl;
   tong=0;
}
}
