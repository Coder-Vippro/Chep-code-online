#include <bits/stdc++.h>

using namespace std;

int tonguoc(int x)
{
    int sum=1;
    for(int i=2;i*i<=x;i++)
        if(x%i==0)
    {
        sum=sum+i;
        if(i*i==x) sum=sum-i;
    }
    return sum;
}
int main()
{
    freopen("SODEP.INP","r",stdin);
    freopen("SODEP.OUT","w",stdout);
    long long n;
    cin>>n;
    if(n%tonguoc(n)==0)
    {
        cout<<"Co";
    }
    else
    {
        cout<<"Khong";
    }
    return 0;
}
