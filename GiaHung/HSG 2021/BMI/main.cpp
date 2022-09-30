#include <bits/stdc++.h>

using namespace std;
float a,b,n;
float c=18.5;
float d=25.0;
int main()
{
    freopen("BMI.INP","r",stdin);
    freopen("BMI.OUT","w",stdout);
    cin>>a>>b;
   n=a/(b*b);

   if(n < c)
   {
       cout<<fixed<<setprecision(1)<<n<<"    "<<"1";
   }
   if(n>= c && n<= d)
   {
       cout<<fixed<<setprecision(1)<<n<<"    "<<"2";
   }
   if(n > d)
   {
       cout<<fixed<<setprecision(1)<<n<<"    "<<"3";
   }
    return 0;
}
