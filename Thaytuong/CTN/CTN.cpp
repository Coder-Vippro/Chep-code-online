#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
long long a,b;
int main()
{
    freopen("CTN.INP","r",stdin);
    freopen("CTN.OUT","w",stdout);
    cin>>a>>b;
    cout<<max(max(a-b,a+b),a*b);
   
}