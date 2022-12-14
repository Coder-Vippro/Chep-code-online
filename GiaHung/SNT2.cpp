#include <bits/stdc++.h>

using namespace std;

bool Numberprime(int a)
{
    if(a<2)
        return false;
        for(int i=2;i*i<=a;i++)
            if(a%i==0)
    return false;
          return true;
}
int main()
{
    int n;
    int temp=n;
    temp/=10;
    for(int i=2;i<=n;i++)
        if(Numberprime(n))
    cout<<i;
    return 0;
}
