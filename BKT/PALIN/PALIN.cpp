#include <bits/stdc++.h>
using namespace std;
bool palincheck (int n)
{
    int k=0;
    int h=n;
    while(n>0)
    {
        k=k*10+n%10;
        n=n/10;
    }
    if(h==k)
    {
        return true;
    }
    return false;
}
int main()
{
    int n,k;
    int kq=0;
    cin>>n>>k;
    for(int i=n;i<=k;i++)
    if(palincheck(i)==true)
    {
        kq++;
    }
    cout<<kq;
}
