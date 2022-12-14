#include <bits/stdc++.h>

using namespace std;
int demuoc(int n)
{
    if(n==1) return 1;
    int d=2;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
    {
        d=d+2;
        if(i*i==n) d--;
    }
    return d;
}
int main()
{
    int a;
    cin>>a;
    cout<<demuoc(a);
    return 0;
}
