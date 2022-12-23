#include <iostream>

using namespace std;
int a,b;
int main()
{
    int s=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if (i%2==0)

            s=s+i;
    }
    cout<<s;




    return 0;
}
