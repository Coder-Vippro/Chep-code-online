#include <bits/stdc++.h>
using namespace std;

int SCS(int n)
{
    int d=0;
    while (n > 0)
    {
        n /= 10;
        d++;
    }
    return d;
}
bool KT(int n)
{
    int m=SCS(n);
    int t=n,s=0,a;
    while (t>0)
    {
        a=t % 10;
        t =t/10;
        s=s+pow(a,m);
    }
    if (s==n)
        return true;
    return false;
}
int main()
{
    int a,b,d=0;
    cin<<a<<b;
    for(int i=a;i<=b;i++)
        {
          if (KT(n)) {cout<<"YES";d++}
           else cout<<"NO";
    }
}
