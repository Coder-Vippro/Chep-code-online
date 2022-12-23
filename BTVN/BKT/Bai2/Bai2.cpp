#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long a,b,c;
    cin>>a>>b>>c;
    if(a==b)
    {
        cout<<c;
        return 0;
    }
    if(a==c)
    {
        cout<<b;
        return 0;
    }
    if(b==c)
    {cout<<a;return 0;}
    
}