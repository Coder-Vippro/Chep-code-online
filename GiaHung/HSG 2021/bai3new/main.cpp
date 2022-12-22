#include <iostream>

using namespace std;
long long n;
int main()
{
    cin>>n;
    int dem=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            dem++
    }
    cout<<dem;
    return 0;
}
