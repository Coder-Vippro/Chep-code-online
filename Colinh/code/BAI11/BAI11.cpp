#include <iostream>

using namespace std;
int gt=2;i=2;
double e=2;
int main()
{
    while(1.0/gt>=2e-6)
    {
        e=e+1.0/gt;
        i++;
        gt=gt*i;
    }
    cout<<fixed<<setprecision(4)<<e;
    return 0;
}
