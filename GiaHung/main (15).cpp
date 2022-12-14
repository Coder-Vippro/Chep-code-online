#include <bits/stdc++.h>
using namespace std;
int dx(int n)
{
    int s=0;
    while(n>0)
    {
        int r=n%10;
        n=n/10;
        s=s*10+r;
    }
    return s;
}
bool ktdx(int x)
{
    if(x==dx(x))
    return true;
    else return false;
}
int main()
{
    int n;
    cin>>n;
    while(!ktdx(n))
          n+=dx(n);
    cout<<n;
    return 0;
}
