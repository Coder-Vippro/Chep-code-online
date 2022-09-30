#include <iostream>

using namespace std;
int a,b;

int main()
{
    cin>>a>>b;
    if (a*b>1000000)
    {
        cout<<a*b-(a*b*10)/100;
    }
    else
    {
        cout<<a*b;
    }
    return 0;
}
