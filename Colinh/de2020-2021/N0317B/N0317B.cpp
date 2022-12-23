#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
double a;
int main()
{
    freopen("N0317B.INP","r",stdin);
    freopen("N0317B.OUT","w",stdout);
    cin>>a;
    int i=1;
    double s=0;
    while(s<=a)
    {
        s+=1.0/i;
        i+=1;
    }
    cout<<i-1;
    
}