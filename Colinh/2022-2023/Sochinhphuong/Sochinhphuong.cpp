#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
bool ktcp(int n)
{
    int k=sqrt(n);
    if(k*k==n)return true;
    return false;
}
int x;
int main()
{
    freopen("Sochinhphuong.INP","r",stdin);
    freopen("Sochinhphuong.OUT","w",stdout);
    while(cin>>x)
    {
        if(ktcp(x)==true)
        {
            cout<<x;
            return 0;
        }
    }
    cout<<-1;
}