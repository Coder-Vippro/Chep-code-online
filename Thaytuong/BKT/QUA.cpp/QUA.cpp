#include <iostream>

using namespace std;
long long x,y;
long long dem=0;
int main()
{
    cin>>x>>y;
    for(long long i=x;i<=y;i=i*2)
        dem++;
    cout<<dem;
    return 0;
}
