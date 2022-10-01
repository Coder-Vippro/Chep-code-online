#include <iostream>

using namespace std;
long long x,y;
long long k=1;
long long k2=3;
long long dem=0;
int main()
{
    cin>>x>>y;
    for(long long i=1;i<=y;i++)
    {
        if(k2*k>=x && k2*k<=y)
        {
            dem++;
            k2=k*k2;
            k++;
        }
        else if(k2*k>y)
            break;
    }
    cout<<dem;
    return 0;
}
