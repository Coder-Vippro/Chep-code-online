#include <iostream>

using namespace std;
int a,b,c;
int main()
{
    cin>>a>>b>>c;
    if(a>b && b>c && a>c)
    {
        cout<<a+b;
    }
    if(a>b && c>b && a>c)
    {
        cout<<a+c;
    }
    if(b>a && c>a && b>c)
    {
        cout<<a+c;
    }
    if(b>a && a>c && b>c)
    {
        cout<<a+b;
    }
    if(c>b && a>b && c>a)
    {
        cout<<a+c;
    }
    if(c>b && b>a && c>a)
    {
        cout<<b+c;
    }
    if(a+b==c ||a+c==b ||c+b==a)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    if(a-b==c ||a-c==b ||c-b==a)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
