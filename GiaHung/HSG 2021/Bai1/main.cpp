#include <iostream>

using namespace std;
long long n;
int main()
{
    cin>>n;
    long long s=0;
    for(int i=1;i<=n;i++)
    {
        s=s+i;
    }
    cout<<s;
    return 0;
}
