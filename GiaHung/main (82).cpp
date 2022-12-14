#include <iostream>

using namespace std;
int a,b,c;
int main()
{
    cin>>a>>b>>c;
    if(a>23) return 0;
    if(c+1>59 && b+1<59)
    {
        cout<<a<<" "<<b+1<<" "<<c+1;
    }
    if(c+1>59 && b+1>59)
    {
        cout<<a+1<<" 00"<<" 00";
    }
    if(c+1<59 && b+1<59)
    {
        cout<<a<<" "<<b<<" "<<c+1;
    }
    if(c+1>59 && b+1<59 )
    {
        cout<<a<<" "<<b+1<<" "<<"00";
    }
    if(c+1==59)
    {
        cout<<a<<" "<<b<<" "<<c+1;
    }

}
