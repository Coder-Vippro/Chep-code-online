#include <iostream>

using namespace std;
int n;
int main()
{
    cin>>n;
    int dem=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
    {
        if(i<=j && i*j==n)
            dem++;
    }
    cout<<dem;
    return 0;
}