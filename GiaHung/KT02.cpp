#include <iostream>

using namespace std;

bool KTLN(int x)
{
    if(x<2)
        return false;
    for(int i=2;i<=x/2;i++)
        if(x%i==0)
        return false;
    return true;
}
int fibonacci(int n)
{
    if (n < 0)
    {
        return -1;
    } else if (n == 0 || n == 1)
    {
        return n;
    } else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
  {
    freopen("KT01.inp","r",stdin)
    freopen("KT01.out","w",stdout)
    long long n,d=2;
    cin>>n;
    for(int i=2;i*i<=n;i++)
    if(n%i==0)
    {
        d++;
        if(i*i!=n)  d++;
    }
    cout<<d;
    return 0;
  }

