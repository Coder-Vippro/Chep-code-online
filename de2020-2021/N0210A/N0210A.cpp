#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int a,b,c,d;
int main()
{
    freopen("N0210A.INP","r",stdin);
    freopen("N0210A.OUT","w",stdout);
    cin>>a>>b>>c>>d;
    cout<<max(max(a,b),max(c,d));
    
    
}