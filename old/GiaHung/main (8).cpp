#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long tam;
    long long a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    if(a>b)
    {
        tam=a;
        a=b;
        b=tam;
    }
    if(a>c)
    {
        tam=a;
        a=c;
        c=tam;
    }
    if(a>d)
    {
        tam=a;
        a=d;
        d=tam;
    }
    if(a>e)
    {
        tam=a;
        a=e;
        e=tam;
    }
    if(b>c)
    {
        tam=b;
        b=c;
        c=tam;
    }
    if(b>d)
    {
        tam=b;
        b=d;
        d=tam;
    }
    if(b>e)
    {
        tam=b;
        b=e;
        e=tam;
    }
    cout<<b;
    return 0;
}
