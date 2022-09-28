#include <iostream>
using namespace std;
int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    long long tong=1;
    for(int i=a;i<=b;i++)
    {
        tong=tong*i;
    }
    cout<<tong%c;
    
}