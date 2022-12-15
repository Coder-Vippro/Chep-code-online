#include <bits/stdc++.h>

using namespace std;
long long somu(long long a,long long b)
{
    int mu=1;
    for(int i=1;i<=b;i++)
    {
        mu*=a;
    }
    return mu;
}
int main()
{
    long long c,d;
    cin>>c>>d;
    cout<<somu(c,d);
    return 0;
}
