#include <iostream>

using namespace std;
long long f[100001];
long long n;
int main()
{
    cin>>n;
    f[1]=2;
    f[2]=1;
    for(int i=3;i<=n+1;i++)
    {
        f[i]=f[i]+f[i-2]+f[i-1];
    }
    cout<<f[n+1];
    return 0;
}
