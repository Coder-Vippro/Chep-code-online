#include <bits/stdc++.h>
using namespace std;
long long x,y,z;
long long tp(long long a,long long b,long long d)
{
    int c;
    a%=b;
    for(long long i=0;i<=d-1;i++)
    {   
        c=(((a*10)/b));
        a=(a*10)%b;
    }
    return c;
}
int main()
{

    cin>>x>>y>>z;
    cout<<tp(x,y,z);
    return 0;
}