#include <iostream>
#include <cstdio>
using namespace std;
long long a,b,c;
int main()
{
    cin>>a>>b>>c;
    if(a/b==c || b/c==a || c/a==b)
    {
        cout<<'/';
    }
    else cout<<"NOSOL";
}