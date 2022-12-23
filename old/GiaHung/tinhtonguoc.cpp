#include <bits/stdc++.h>

using namespace std;
int tonguoc(int n)
{
    int sum=1;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
    {
        sum=sum+i;
        if(i*i==n) sum=sum-i;
    }
    return sum;
}
int main()
{
    int a;
    cin>>a;
    cout<<tonguoc(a);
    return 0;
}
