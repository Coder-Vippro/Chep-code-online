#include <iostream>
#include <cstdio>
using namespace std;
long long n;
int main()
{
    freopen("Chanle.INP","r",stdin);
    freopen("Chanle.OUT","w",stdout);
    cin>>n;
    if(n%2==1)cout<<"ODD";
    else cout<<"EVEN";
}