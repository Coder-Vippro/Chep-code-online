#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    n=n-1;
    for(int i=1;i<=n;i++)
    {
        if(i%2==1)
        cout<<i<<' ';
    }
    return 0;
}