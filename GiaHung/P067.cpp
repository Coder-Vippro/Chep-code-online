#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    int d=0;
    while(n>=5)
    {
        n=n/5;
        d=d+n;
    }
   cout<<d;
   return 0;
}
