#include <iostream>

using namespace std;
double a,b;
int main()
{
    cin>>a>>b;
    int s=0;
    for(int i=a;i<=b;i++)
    {
        s=s+i;
    }
    cout<<s;
    return 0;
}
