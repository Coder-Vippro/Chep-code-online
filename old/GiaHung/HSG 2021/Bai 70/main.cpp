#include <iostream>

using namespace std;
int a,b,c;
int main()
{
    cin>>a>>b>>c;
    if(c<1900)
    {
        cout<<"NO";
        return 0;
    }
    if(b>12 || b<1)
    {
        cout<<"NO";
        return 0;
    }
    if(a>31)
    {
        cout<<"NO";
        return 0;
    }
    if(b==2 && a<=28)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO"
        return 0;
    }

    return 0;
}
