#include <bits/stdc++.h>
using namespace std;
int main()
{
   string a;
   getline(cin,a);
   cout<<a;
   for(int i=a.size()-1;i>=0;i--)
       cout<<a[i];
}