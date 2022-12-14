#include <iostream>

using namespace std;
int n;
int main()
{
    cin>>n;
    int dem=0;
    for(int i=1;i<=n;i++)
    {
        if(i==5)
            dem++;
    }
    cout<<dem;
    return 0;
}
