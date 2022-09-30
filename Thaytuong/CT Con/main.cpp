#include <bits/stdc++.h>

using namespace std;
int tcs(int n)
{
    int tong=0;
    while(n>0)
    {
        tong=tong+n%10;
        n=n/10;
    }
    return tong;
}
int main()
{
    int n;
    cin>>n;
    cout<<tcs(n);
    return 0;
}
