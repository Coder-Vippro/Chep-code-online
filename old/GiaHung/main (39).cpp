#include<iostream>
using namespace std;
int fb(int n)
{
    if(n==1||n==0||n==2||n==3) return n;
   return fb(n-2)+fb(n-1);
}
int main()
{
   int i,n,d=0;
   cin>>n;
   for(i=0;i<=n;i++)
       if(n==fb(i))
       {
            d++;
       }
   if(d==1) cout<<"yes";
   else cout<<"no";
   return 0;
}
