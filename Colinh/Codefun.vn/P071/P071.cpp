#include <bits/stdc++.h>
using namespace std;
bool ktnt(long long n)
{
    long long k=sqrt(n);
    if(k*k==n)
    return true;
    else return false;
}
int main()
{
    long long n;
    cin>>n;
    if(ktnt(n)==true)
    {
        cout<<"YES";
    }
    else cout<<"NO";
}