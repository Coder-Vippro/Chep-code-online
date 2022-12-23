#include <iostream>
using namespace std;
int main()
{
    int n;
    int dem=0;
    while(n>0)
    {
        n=n/10;
        dem++;
    }
    cout<<dem;
}
