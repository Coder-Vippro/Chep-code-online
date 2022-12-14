#include <bits/stdc++.h>
using namespace std;
int main()
{
 float a,b,c;
 cin>>a>>b>>c;  
 float p=(a+b+c)/2;
 cout<<fixed<<setprecision(6)<<sqrt(p*(p-a)*(p-b)*(p-c));
 return 0;
}