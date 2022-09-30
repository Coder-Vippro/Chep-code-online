#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a,b;
    cin>>a>>b;
    char c;
    cin>>c;
    if(c=='+')
    {
        cout<<setprecision(2)<<fixed<<a+b;
    }
    if(c=='*')
    {
        cout<<setprecision(2)<<fixed<<a*b;
    }
    if(c=='/')
    {
        cout<<setprecision(2)<<fixed<<a/b;
    }
    if(c=='-')
    {
        cout<<setprecision(2)<<fixed<<a-b;
    }
}