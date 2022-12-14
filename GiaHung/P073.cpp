#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    int dem=0;
    long long k=n;
    while(k>0)
    {
        dem=dem+k%10;
        k=k/10;
    }
    if(n%dem==0)
    {
        cout<<"YES";
    }
    else cout<<"NO";
}