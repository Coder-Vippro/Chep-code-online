#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int dem=0;
    for(int i=(n-1/2);i<=n;i++)
    {
        dem++;
    }
    cout<<dem;
}