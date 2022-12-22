#include <bits/stdc++.h>

using namespace std;
bool tl(int n)
{
    int sodao=0,m=n;
    while(n>0)
    {
        sodao=sodao*10+n%10;
        n/=10;
    }
    if(__gcd(m,sodao)==1) return true;
    else return false;
}

int main()
{
    freopen("sotl.inp","r",stdin);
    freopen("sotl.out","w",stdout);
    int a,b,d=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
        if(tl(i)) d++;
    cout<<d;
    return 0;
}
