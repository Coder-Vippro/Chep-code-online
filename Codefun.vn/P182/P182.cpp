#include <bits/stdc++.h>
using namespace std;
long long n;
int main()
{
    cin>>n;
    long long tong=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        tong=tong+i;
    }
    cout<<tong;
}