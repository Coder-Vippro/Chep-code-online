#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a>b)swap(a,b);
    if(b>c)swap(b,c);
    if(c>d)swap(c,d);
    if(a>b)swap(a,b);
    if(b>c)swap(b,c);
    if(c>d)swap(c,d);
    long long maxx=a*b;
    if(c*d>maxx)
    {
        maxx=c*d;
    }
    if(b*c>maxx)
    {
        maxx=b*c;
    }
    cout<<maxx;
    
}