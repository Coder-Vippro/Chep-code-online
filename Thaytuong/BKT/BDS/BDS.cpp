#include <bits/stdc++.h>

using namespace std;
int bds(int n)
{
    int maxx=0;
    while(n>0)
    {
        maxx=max(maxx,n%10);
        n=n/10;
    }
    return maxx;
}
int main()
{
    int n,kq=0;
    cin>>n;
    while(n>0)
    {
        kq++;
        n=n-bds(n);
        if(n==0)
        {
            cout<<kq;
            return 0;
        }
    }
    return 0;
}
